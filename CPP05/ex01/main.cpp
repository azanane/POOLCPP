#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"

int	main() 
{
	try {

		Bureaucrat	bureaucrat("Anas", 0);
		PRINT("")
		Form		formTest("test", 0, 0);

		PRINT("")
		--bureaucrat;
		formTest.beSigned(bureaucrat);

		PRINT("")
		++bureaucrat;
		formTest.beSigned(bureaucrat);
	}
	catch (std::exception& e)
	{
		PRINT(e.what())
		return 1;
	}

	return 0;
}
