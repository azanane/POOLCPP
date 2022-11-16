#include "Animal.hpp"

Animal::Animal( void ) {

	PRINT("Animal default constructor")
}

Animal::Animal( Animal const & src ) {

	PRINT("Animal copy constructor")

	this->_type = src._type;
}

Animal & Animal::operator=( Animal const & rhs ) {

	this->_type = rhs._type;

	return *this;
}

Animal::~Animal( void ) {

	PRINT("Animal destructor")
}

void	Animal::makeSound() const {

	PRINT("HEYYY, I'M AN ANIMAL!")
}

std::string Animal::getType() const {return this->_type;}
