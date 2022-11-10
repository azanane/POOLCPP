#include "../includes/Fixed.hpp"

const int	Fixed::_nb_bytes = 8;

Fixed::Fixed( void ) {

	std::cout << "Default constructor called" << std::endl;

	this->_nb = 0;

}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;
}

Fixed::Fixed( int const construct_int ) {

	std::cout << "Int constructor called" << std::endl;

	this->setRawBits(construct_int << this->_nb_bytes);
}

Fixed::Fixed( float const construct_float ) {

	std::cout << "Float constructor called" << std::endl;

	this->setRawBits(roundf(construct_float * (float)(1 << this->_nb_bytes)));
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;

	this->setRawBits(rhs.getRawBits());

	return *this;
}

int		Fixed::getRawBits( void ) const {

	return this->_nb;
}

void	Fixed::setRawBits( int const raw ) {

	this->_nb = raw;
}

float	Fixed::toFloat( void ) const {

	float floatNb;

	floatNb = (float)this->_nb / (float)(1 << this->_nb_bytes);
	return floatNb;
}

int		Fixed::toInt( void ) const {

	int	intNb;

	intNb = this->_nb >> this->_nb_bytes;
	return intNb;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {

	o << i.toFloat();
	return o;
}