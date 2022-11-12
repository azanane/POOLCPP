#include "Dog.hpp"

Dog::Dog( void ) {

	PRINT("Dog default constrctor")

	this->_type = "Dog";
}

Dog::Dog( Dog const & src ) {

	PRINT("Dog copy constrctor")

	this->_type = src._type;
}

Dog & Dog::operator=( Dog & rhs ) {

	this->_type = rhs._type;

	return *this;
}

Dog::~Dog( void ) {

	PRINT("Dog destructor")
}

void		Dog::makeSound() const {

	PRINT("WAF")
}