#include "RPN/RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {

		PRINT("Need only one argument (operation).")
		return 1;
	}

	std::string operation(av[1]);

	int operandCount = 0, numberCount = 0;
	size_t i = 0;

	while (i < operation.size()) {

		if ((operation[i] < 48 || operation[i] > 57)
			&& operation[i] != '+' && operation[i] != '-' && operation[i] != '/' && operation[i] != '*' 
			&& operation[i] != ' ') {

			PRINT("Error")
			return 1;
		}
		else if (operation[i] >= 48 && operation[i] <= 57 && (i == 0 || (operation[i - 1] < 48 || operation[i - 1] > 58))) {

			numberCount++;
		}
		else if (operation[i] == '+' || operation[i] == '-' || operation[i] == '/' || operation[i] == '*' ) {

			operandCount++;
		}
	
		i++;
	}

	if (numberCount != operandCount + 1) {

		PRINT("Error")
		return 1;
	}

	try {

		RPN rpn = RPN(operation);
	} 
	catch (std::exception& e) {

		PRINT(e.what())
	
		return 1;
	}

	return 0;
}
