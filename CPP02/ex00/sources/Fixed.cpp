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

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;

	this->setRawBits(rhs.getRawBits());

	return *this;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_nb;
}

void	Fixed::setRawBits( int const raw ) {

	this->_nb = raw;
}
