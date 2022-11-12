#include "Cat.hpp"

Cat::Cat( void ) {

	PRINT("Cat default constrctor")

	this->_type = "Cat";
	this->_brain = new Brain();
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

	delete this->_brain;
}

void		Cat::makeSound() const {

	PRINT("MIAOU")
}