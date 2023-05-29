#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <algorithm>
# include <iostream>
# include <fstream>
# include <string>

# define PRINT(x) std::cout << x << std::endl;

class BitcoinExchange {

	public:

		BitcoinExchange( std::ifstream& priceData, std::ifstream& receiveData );
		BitcoinExchange( BitcoinExchange const & src );
		BitcoinExchange & operator=( BitcoinExchange const & rhs );
		
		~BitcoinExchange( void );

		void		getExchange( std::string date, float amount ) const;

		class InvalidData : public std::exception {

			public:

				virtual const char * what() const throw() {return "Invalid Data.";}
		};

	private:

		BitcoinExchange( void );

		std::map<std::string, float>	_priceContainer;

		std::string	compareDate(std::string inputDate, std::string date) const;
		bool 		isNumber(std::string number, bool isPrice) const;
		bool 		isValidDate(std::string date) const;
};

#endif
