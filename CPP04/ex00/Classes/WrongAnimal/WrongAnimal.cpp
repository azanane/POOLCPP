#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {

	PRINT("Wrong Animal default constrctor")
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {

	PRINT("Wrong Animal copy constrctor")

	this->_type = src._type;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal & rhs ) {

	this->_type = rhs._type;

	return *this;
}

WrongAnimal::~WrongAnimal( void ) {

	PRINT("Wrong Animal destructor")
}

void	WrongAnimal::makeSound() const {

	PRINT("HEYYY, I'M AN ANIMAL, BUT WITH ME, IT'S GONNA BE WRONG!")
}

std::string WrongAnimal::getType() const {return this->_type;}
