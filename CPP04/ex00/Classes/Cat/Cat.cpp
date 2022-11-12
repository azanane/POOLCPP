#include "Cat.hpp"

Cat::Cat( void ) {

	PRINT("Cat default constrctor")

	this->_type = "Cat";
}

Cat::Cat( Cat const & src ) {

	PRINT("Cat copy constrctor")

	this->_type = src._type;
}

Cat & Cat::operator=( Cat & rhs ) {

	this->_type = rhs._type;

	return *this;
}

Cat::~Cat( void ) {

	PRINT("Cat default destructor")
}

void		Cat::makeSound() const {

	PRINT("MIAOU")
}