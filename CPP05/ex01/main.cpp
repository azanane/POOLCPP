#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"

int	main() 
{
	try {

		Bureaucrat	bureaucrat("Anas", 1);
		Form		formTest("test", 1, 1);
		Form		formTest2("test", 1, 1);

		formTest.beSigned(bureaucrat);

		PRINT("")
		bureaucrat.decreaseGrade();
		formTest.beSigned(bureaucrat);

		PRINT("")
		formTest2.beSigned(bureaucrat);
	}
	catch (std::exception& e)
	{
		PRINT(e.what())
		return 1;
	}

	return 0;
}
