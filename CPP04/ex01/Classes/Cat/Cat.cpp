#include "Cat.hpp"

Cat::Cat( void ) {

	PRINT("Cat default constrctor")

	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( Cat const & src ) {

	PRINT("Cat copy constrctor")

	*this = src;
}

Cat & Cat::operator=( Cat const & rhs ) {

	this->_type = rhs._type;

	if (this->_brain)
		delete this->_brain;
	
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);

	return *this;
}

Cat::~Cat( void ) {

	PRINT("Cat default destructor")

	delete this->_brain;
}

void		Cat::makeSound() const {

	PRINT("MIAOU")
}