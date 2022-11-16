#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"

int	main() 
{
	try {

		Bureaucrat	bureaucrat("Anas", 1);
		AForm*		formShrubbery = new ShrubberyCreationForm("formShrubbery");

		formShrubbery->beSigned(bureaucrat);
		bureaucrat.executeForm(*formShrubbery);
		delete formShrubbery;

		PRINT("");
		AForm*	formRobotomy = new RobotomyRequestForm("formRobotomy");
		formRobotomy->beSigned(bureaucrat);
		bureaucrat.executeForm(*formRobotomy);
		delete formRobotomy;

		PRINT("");
		AForm*	formPresidential = new PresidentialPardonForm("formPresidential");
		formPresidential->beSigned(bureaucrat);
		bureaucrat.executeForm(*formPresidential);
		delete formPresidential;

		PRINT("");
		AForm*	formPresidentialNonSigned = new PresidentialPardonForm("formPresidential");
		bureaucrat.executeForm(*formPresidentialNonSigned);

	}
	catch (std::exception& e)
	{
		PRINT(e.what())
		return 1;
	}

	return 0;
}
