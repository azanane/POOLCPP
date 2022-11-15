#include "Dog.hpp"

Dog::Dog( void ) : _brain(nullptr) {

	PRINT("Dog default constrctor")

	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( Dog const & src ) : _brain(nullptr) {

	PRINT("Dog copy constrctor")

	*this = src;
}

Dog & Dog::operator=( Dog const & rhs ) {

	this->_type = rhs._type;

	if (this->_brain)
		delete this->_brain;
	
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);

	return *this;
}

Dog::~Dog( void ) {

	PRINT("Dog destructor")

	delete this->_brain;
}

void		Dog::makeSound() const {

	PRINT("WAF")
}