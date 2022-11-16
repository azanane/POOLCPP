#include "Bureaucrat/Bureaucrat.hpp"

int	main() 
{
	try {

		Bureaucrat	bureaucrat("Anas", 0);

		PRINT("");
		Bureaucrat	randomBureuacrat("Max", 151);

		Bureaucrat	copyRandomBureaucrat(randomBureuacrat);

		Bureaucrat	equalRandomBureaucrat = randomBureuacrat;


		PRINT(std::endl << std::endl)
		
		Bureaucrat	highestBureaucrat("Anas", 1);
		PRINT( highestBureaucrat )

		++highestBureaucrat;

		PRINT("");
		std::cout << --highestBureaucrat;
	}
	catch (std::exception& e)
	{
		PRINT(e.what())
		return 1;
	}

	return 0;
}
