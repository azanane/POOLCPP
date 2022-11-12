#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {

	PRINT("AAnimal default constructor")
}

AAnimal::AAnimal( AAnimal const & src ) {

	PRINT("AAnimal copy constructor")

	this->_type = src._type;
}

AAnimal & AAnimal::operator=( AAnimal & rhs ) {

	this->_type = rhs._type;

	return *this;
}

AAnimal::~AAnimal( void ) {

	PRINT("AAnimal destructor")
}

void	AAnimal::makeSound() const {

	PRINT("HEYYY, I'M AN AAnimal!")
}

std::string AAnimal::getType() const {return this->_type;}
