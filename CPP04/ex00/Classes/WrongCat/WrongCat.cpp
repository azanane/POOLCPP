#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	PRINT("Wrong Cat default constrctor")

	this->_type = "Wrong Cat";
}

WrongCat::WrongCat( WrongCat const & src ) {

	PRINT("Wrong Cat copy constrctor")

	this->_type = src._type;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {

	this->_type = rhs._type;

	return *this;
}

WrongCat::~WrongCat( void ) {

	PRINT("Wrong Cat default destructor")
}

void		WrongCat::makeSound() const {

	PRINT("MIAOUWRONG")
}
