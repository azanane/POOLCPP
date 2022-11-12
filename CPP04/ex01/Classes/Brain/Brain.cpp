#include "Brain.hpp"

Brain::Brain( void ) {

	PRINT("Brain default constructor")
}

Brain::Brain( Brain const & src ) {

	PRINT("Brain copy constructor")

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain & Brain::operator=( Brain & rhs ) {

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];

	return *this;
}

Brain::~Brain( void ) {

	PRINT("Brain destructor")
}