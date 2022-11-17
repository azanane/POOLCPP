#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "Intern/Intern.hpp"

int	main() 
{
	srand(time(NULL));
	try {

		Intern someRandomIntern;
		AForm* rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			
		Bureaucrat	bureaucrat("Anas", 1);
		rrf->beSigned(bureaucrat);
		bureaucrat.executeForm(*rrf);
		delete rrf;

		rrf = someRandomIntern.makeForm("robotomyyyyyyy request", "Bender");
			
	}
	catch (std::exception& e)
	{
		PRINT(e.what())
		return 1;
	}

	return 0;
}
