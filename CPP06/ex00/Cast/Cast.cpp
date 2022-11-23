#include "Cast.hpp"

Cast::Cast( void ) {}

Cast::Cast( char* const nbToCast, std::string const & type ) : _nbDouble(strtod(nbToCast, NULL)), _type(type), _nbToCast(nbToCast) {}

Cast::Cast( Cast const & src ) {

	*this = src;
}

Cast & Cast::operator=( Cast const & rhs ) {

	this->_nbChar = rhs._nbChar;
	this->_nbInt = rhs._nbInt;
	this->_nbFloat = rhs._nbFloat;
	this->_nbDouble = rhs._nbDouble;

	return *this;
}

Cast::~Cast( void ) {}

void	Cast::printNbChar() const {

	if (this->_type == "char")
		PRINT("char: " << this->_nbToCast)
	else if (this->_nbDouble < 32 || this->_nbDouble > 126)
		PRINT("char: " << "Non displayable")
	else
		PRINT("char: '" << static_cast<char>(this->_nbDouble) << "'")
}

void	Cast::printNbInt() const {

	if (this->_type == "char")
		PRINT("int: " << static_cast<int>(*this->_nbToCast))
	else if (this->_nbDouble < static_cast<double>(INT_MIN) || this->_nbDouble > static_cast<double>(INT_MAX))
		PRINT("int: " << "overflow")
	else
		PRINT("int: " << static_cast<int>(this->_nbDouble))
}

void	Cast::printNbFloat() const {


	if (this->_type == "char")
		PRINT("float: " << static_cast<float>(*this->_nbToCast) << "f")
	else
		PRINT("float: " << static_cast<float>(this->_nbDouble) << "f")
}

void	Cast::printNbDouble() {

	if (this->_type == "char")
		PRINT("double: " << static_cast<int>(*this->_nbToCast))
	else
		PRINT("double: " << this->_nbDouble)
}
