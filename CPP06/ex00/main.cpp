#include "Cast/Cast.hpp"

std::string printNbType(char* const nb) {

	if (strlen(nb) == 1 && std::isdigit(nb[0]) == 0)
		return "char";
	else if (strcmp(nb, "-inf") == 0 || strcmp(nb, "+inf") == 0 || strcmp(nb, "nan") == 0)
		return "double";
	else if (strcmp(nb, "-inff") == 0 || strcmp(nb, "+inff") == 0 || strcmp(nb, "nanf") == 0)
		return "float";


	size_t	countDigit = 0;
	size_t	countNegative = 0;
	size_t	countPoint = 0;
	size_t	countFloat = 0;

	if (nb[0] == '-')
		++countNegative;

	for (size_t i = 0; i < strlen(nb); i++) {

		if (std::isdigit(nb[i]))
			++countDigit;
		else if (nb[i] == '.' && std::isdigit(nb[i + 1]))
			++countPoint;
		else if (nb[i] == 'f' && i + 1 == strlen(nb))
			++countFloat;
	}

	if (countDigit + countNegative == strlen(nb)) // ex : 42
		return "int";
	else if (countDigit + countNegative + countPoint == strlen(nb)) // ex : 42.0
		return "double";
	else if (countDigit + countNegative + countPoint + countFloat == strlen(nb) && countPoint) // ex : 42.0f
		return "float";
	
	return "";
}

int	main(int ac, char **av) 
{
	if (ac != 2)
		PRINT("Need only one argument (char, int, float or double).")
	else
	{
		std::string const & type = printNbType(av[1]);

		if (type == "") {

			PRINT("Error in type (need : char, int, float or double).")
			return 1;
		}

		Cast	nbCast(av[1], type);

		nbCast.printNbChar();
		nbCast.printNbInt();
		nbCast.printNbFloat();
		nbCast.printNbDouble();
	}

	return 0;
}
