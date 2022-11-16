#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"

int	main() 
{
	try {

		Bureaucrat	bureaucrat("Anas", 1);
		AForm*		formTest = new ShrubberyCreationForm("ok");

		--bureaucrat;
		formTest->beSigned(bureaucrat);

		++bureaucrat;

		formTest->execute(bureaucrat);
	}
	catch (std::exception& e)
	{
		PRINT(e.what())
		return 1;
	}

	return 0;
}
