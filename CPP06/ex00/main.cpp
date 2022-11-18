#include "Cast/Cast.hpp"

std::string getNbType(char* const nb) {

	if (strlen(nb) == 1 && std::isdigit(nb[0]) == 0)
		return "char";
	else if (strcmp(nb, "-inf") == 0 || strcmp(nb, "+inf") == 0 || strcmp(nb, "nan") == 0)
		return "double";
	else if (strcmp(nb, "-inff") == 0 || strcmp(nb, "+inff") == 0 || strcmp(nb, "nanf") == 0)
		return "float";


	size_t	countDigit = 0;
	size_t	countPoint = 0;
	size_t	countFloat = 0;

	for (size_t i = 0; i < strlen(nb); i++) {

		if (std::isdigit(nb[i]))
			++countDigit;
		else if (nb[i] == '.' && std::isdigit(nb[i + 1]))
			++countPoint;
		else if (nb[i] == 'f' && i + 1 == strlen(nb))
			++countFloat;
	}

	if (countDigit == strlen(nb)) // ex : 42
		return "int";
	else if (countDigit + countPoint == strlen(nb)) // ex : 42.0
		return "double";
	else if (countDigit + countPoint + countFloat == strlen(nb) && countPoint) // ex : 42.0f
		return "float";
	
	return "";
}

int	main(int ac, char **av) 
{
	if (ac != 2)
		PRINT("Need only one argument (char, int, float or double).")
	else
	{
		std::string const & type = getNbType(av[1]);

		if (type == "") {

			PRINT("Error in type (need : char, int, float or double).")
			return 1;
		}

		// std::string			nb(av[1]);
		Cast				nbCast(av[1], type);

		PRINT("TYPE : " << type << std::endl)

		PRINT("char: " << nbCast.getNbChar())
		PRINT("int: " << nbCast.getNbInt())
		PRINT("float: " << nbCast.getNbFloat())
		PRINT("double: " << nbCast.getNbDouble())
	}

	return 0;
}
