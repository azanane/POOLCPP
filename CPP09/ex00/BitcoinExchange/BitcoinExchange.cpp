#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( std::ifstream& priceData, std::ifstream& receiveData ) {

	std::string	content_tmp;

	std::string date;
	float price = 0;
	while (std::getline(priceData, content_tmp))
	{
		std::size_t pos = content_tmp.find(",");

		date = content_tmp.substr(0, pos);
		if (date != "date") {

			if ( isNumber(content_tmp.substr(pos + 1), true) == true 
				&& isValidDate(date).substr(0, 5) != "Error" ) 
			{
				price = std::atof(content_tmp.substr(pos + 1).c_str());
				this->_priceContainer.insert(std::pair<std::string, float>(date, price));
			}
			else throw BitcoinExchange::InvalidData();
		}
		date = "";
		price = 0;
	}
	priceData.close();

	while (std::getline(receiveData, content_tmp))
	{
		std::size_t pos = content_tmp.find("|");
		
		if (pos == std::string::npos) {

			PRINT("Error : bad input => " << content_tmp)
		}
		else {

			date = content_tmp.substr(0, pos);
			if (date != "date ") {

				if (isNumber(content_tmp.substr(pos + 2), true) == true 
					|| (content_tmp.substr(pos + 2)[0] == '-' && isNumber(content_tmp.substr(pos + 3), true) == true)) {

					if (date[date.size() - 1] == ' ')
						date = isValidDate(date.substr(0, date.size() - 1));
					else
						date = isValidDate(date);
					price = std::atof(content_tmp.substr(pos + 1).c_str());

					if (price < 0) {
						PRINT("Error : not a positive number => " << price);
					}
					else if (price > 1000) {
						PRINT("Error : too large a number => " << price);
					}
					else {
						getExchange(date, price);
					}
				}
				else {
					PRINT("Error : bad input for the price => " << content_tmp.substr(pos + 2));
				}
			}
		}
		date = "";
		price = 0;
	}
	receiveData.close();
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src ) {

	if (&src != this) 
		*this = src;
}

BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & rhs ) {

	this->_priceContainer = rhs._priceContainer;

	return *this;
}

BitcoinExchange::~BitcoinExchange( void ) {}

void	BitcoinExchange::getExchange( std::string date, float amount ) const {

	if (date.substr(0, 5) == "Error") {

		PRINT(date)
		return ;
	}


	std::map<std::string, float>::const_iterator search = this->_priceContainer.find(date);
	
	if (search != this->_priceContainer.end()) {

		float product = amount * search->second;
		PRINT(date << " => " << amount << " = " << product)
		return ;
	}
	else {

		size_t i = 0;
	
		for (std::map<std::string, float>::const_iterator it = this->_priceContainer.begin(); 
			it != this->_priceContainer.end(); ++it) {

			float product = amount * it->second;

			if (this->compareDate(date, it->first) == "smaller" && i == 0) {

				PRINT(date << " => " << amount << " = " << product)
				return ;
			}
			else if (this->compareDate(date, it->first) == "smaller") {

				it--;
				product = amount * it->second;

				PRINT(date << " => " << amount << " = " << product)
				return ;
			}
		
			i++;
			if (i == this->_priceContainer.size())
				PRINT(date << " => " << amount << " = " << product)
		}
	}
}

std::string BitcoinExchange::compareDate(std::string inputDate, std::string date) const {

	int inputYear, inputMonth, inputDay, year, month, day;
	int pos = inputDate.find("-");

	inputYear = std::atoi(inputDate.substr(0, pos).c_str());
	inputMonth = std::atoi(inputDate.substr(pos + 1, 2).c_str());
	inputDay = std::atoi(inputDate.substr(pos + 4, 2).c_str());

	pos = date.find("-");

	year = std::atoi(date.substr(0, pos).c_str());
	month = std::atoi(date.substr(pos + 1, 2).c_str());
	day = std::atoi(date.substr(pos + 4, 2).c_str());

	if (year < inputYear)
		return "greater";
	else if (year > inputYear)
		return "smaller";
	else if (month < inputMonth)
		return "greater";
	else if (month > inputMonth)
		return "smaller";
	else if (day < inputDay)
		return "greater";
	else if (day > inputDay)
		return "smaller";

	return "greater";
}

bool BitcoinExchange::isNumber(std::string number, bool isPrice) const {

	int i = 0;
	int countPoint = 0;
	int countNumber = 0;
	while (number[i]) {

		if (number[i] == '.' && countPoint == 0 && isPrice == true)
			countPoint++;
		else if (number[i] == '.' && countPoint > 0)
			return false;
		else if (std::isdigit(number[i]) == false)
			return false;
		else if (std::isdigit(number[i]) == true)
			countNumber++;
		i++;
	}

	if (countNumber == 0)
		return false;

	return true;
}

std::string BitcoinExchange::isValidDate(std::string date) const {

	int year = 0, month = 0, day = 0;
	std::size_t pos[3];
	std::size_t oldPos = 0;

	pos[0] = date.find("-");
	pos[1] = date.rfind("-");

	int i = 0;
	while (i <= 2) {
		
		if (i == 0 && isNumber(date.substr(oldPos, pos[i]), false) == true && year == 0) {

			year = std::atoi(date.substr(oldPos, pos[i]).c_str());
		}
		else if (isNumber(date.substr(oldPos, 2), false) == true && month == 0 && i == 1) {

			month = std::atoi(date.substr(oldPos, 2).c_str());
		}
		else if (isNumber(date.substr(oldPos, 2), false) == true && day == 0 && i == 2) {

			day = std::atoi(date.substr(oldPos, 2).c_str());

			if (month == 4 || month == 6 || month == 9 || month == 11) {

				if ( day > 30 ) {
	
					return "Error: Bad input => " + date;
				}
			}
			else if (month == 2 && day == 29) {

				if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {

					return "Error: Bad input => " + date;
				}
			}
		}
		else { 

			return "Error: Bad input => " + date;
		}
		oldPos = pos[i] + 1;
		i++;
	}

	if (month < 1 || month > 12 || day < 1 || day > 31 || (month == 2 && day > 29) || year < 2009) {
	
		return "Error: Bad input => " + date;
	}

	return date;
}
