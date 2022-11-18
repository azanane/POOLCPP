#include "Cast.hpp"

const std::string Cast::_compareType[4] = {"char", "int", "float", "double"};

Cast::Cast( void ) {}

Cast::Cast( char* const nbToCast, std::string const & type ) {

	int	search = -1;
	for (int i = 0; i < 4; i++) {
		
		if (type.compare(this->_compareType[i]) == 0)
			search = i;
	}
	this->_type = search;

	switch (this->_type) {
		case 0:
			this->_nbChar = *nbToCast;
			return;
		case 1:
			this->_nbInt = static_cast<int>(*nbToCast);
			return;
		case 2:
			this->_nbFloat = static_cast<float>(*nbToCast);
			return;
		case 3:
			this->_nbDouble = static_cast<double>(*nbToCast);
			return;
	}
}

Cast::Cast( Cast const & src ) {

	*this = src;
}

Cast & Cast::operator=( Cast const & rhs ) {

	this->_nbChar = rhs._nbChar;
	this->_nbInt = rhs._nbInt;
	this->_nbFloat = rhs._nbFloat;
	this->_nbDouble = rhs._nbDouble;
	this->_type = rhs._type;

	return *this;
}

Cast::~Cast( void ) {}

char	Cast::getNbChar() const {

	switch (this->_type) {
		
		case 0:
			return this->_nbChar;
		case 1:
			return static_cast<char>(this->_nbInt);
		case 2:
			return static_cast<char>(this->_nbFloat);
		default:
			return static_cast<char>(this->_nbDouble);
	}
}

int		Cast::getNbInt() const {

	switch (this->_type) {
		
		case 0:
			return static_cast<int>(this->_nbChar);
		case 1:
			return this->_nbInt;
		case 2:
			return static_cast<int>(this->_nbFloat);
		default:
			return static_cast<int>(this->_nbDouble);
	}
}

float	Cast::getNbFloat() const {

	switch (this->_type) {
		
		case 0:
			return static_cast<float>(this->_nbChar);
		case 1:
			return static_cast<float>(this->_nbInt);
		case 2:
			return this->_nbFloat;
		default:
			return static_cast<float>(this->_nbDouble);
	}
}

double	Cast::getNbDouble() const {

	switch (this->_type) {
		
		case 0:
			return static_cast<double>(this->_nbChar);
		case 1:
			return static_cast<double>(this->_nbInt);
		case 2:
			return static_cast<double>(this->_nbFloat);
		default:
			return this->_nbDouble;
	}	
}
