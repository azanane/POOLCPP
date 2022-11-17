#include "Bureaucrat/Bureaucrat.hpp"

int	main() 
{
	try {

		Bureaucrat	bureaucrat("Anas", 1);

		Bureaucrat	randomBureuacrat("Max", 150);

		Bureaucrat	copyRandomBureaucrat(randomBureuacrat);

		Bureaucrat	equalRandomBureaucrat = randomBureuacrat;
		
		Bureaucrat	highestBureaucrat("Anas", 1);
		
		PRINT( highestBureaucrat )

		highestBureaucrat.increaseGrade();
	}
	catch (std::exception& e)
	{
		PRINT(e.what())
		return 1;
	}

	return 0;
}

