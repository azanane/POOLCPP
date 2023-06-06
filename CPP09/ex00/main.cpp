#include "BitcoinExchange/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {

		PRINT("Need only one argument (filename).")
		return 1;
	}

	std::ifstream	priceFile;

	priceFile.open("./utils/data.csv");
	if (priceFile.fail()) {
		
		PRINT("Wrong filename (check the utils/data.csv file).\n")
		return 2;
	}

	std::ifstream	inputFile;

	inputFile.open(av[1]);
	if (inputFile.fail()) {
		
		PRINT("Wrong filename.\n")
		priceFile.close();
		return 2;
	}

	try {

		BitcoinExchange btcPrice = BitcoinExchange(priceFile, inputFile);
	} 
	catch (std::exception& e) {

		PRINT(e.what())

		priceFile.close();
		inputFile.close();
	
		return 1;
	}


	return 0;
}
