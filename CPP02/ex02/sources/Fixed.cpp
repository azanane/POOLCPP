#include "../includes/Fixed.hpp"

const int	Fixed::_nb_bytes = 8;

Fixed::Fixed( void ) {

	this->_nb = 0;

}

Fixed::Fixed( Fixed const & src ) {

	*this = src;
}

Fixed::Fixed( int const construct_int ) {

	this->setRawBits(construct_int << this->_nb_bytes);
}

Fixed::Fixed( float const construct_float ) {

	this->setRawBits(roundf(construct_float * (float)(1 << this->_nb_bytes)));
}

Fixed::~Fixed( void ) {}

Fixed & Fixed::operator=( Fixed const & rhs ) {

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

int Fixed::operator>( Fixed const & rhs ) const {

	if (this->toFloat() > rhs.toFloat())
		return (1);
	
	return (0);
}

int Fixed::operator<( Fixed const & rhs ) const {

	if (this->toFloat() < rhs.toFloat())
		return (1);
	
	return (0);
}

int Fixed::operator>=( Fixed const & rhs ) const {

	if (this->toFloat() >= rhs.toFloat())
		return (1);
	
	return (0);
}

int Fixed::operator<=( Fixed const & rhs ) const {

	if (this->toFloat() <= rhs.toFloat())
		return (1);
	
	return (0);
}

int Fixed::operator==( Fixed const & rhs ) const {

	if (this->toFloat() == rhs.toFloat())
		return (1);
	
	return (0);
}

int Fixed::operator!=( Fixed const & rhs ) const {

	if (this->toFloat() != rhs.toFloat())
		return (1);
	
	return (0);
}


Fixed Fixed::operator+( Fixed const & rhs) {

	Fixed	newInstance( this->toFloat() + rhs.toFloat() );

	return newInstance;
}

Fixed Fixed::operator-( Fixed const & rhs) {

	Fixed	newInstance( this->toFloat() - rhs.toFloat() );

	return newInstance;
}

Fixed Fixed::operator*( Fixed const & rhs) {

	Fixed	newInstance( this->toFloat() * rhs.toFloat() );

	return newInstance;
}

Fixed Fixed::operator/( Fixed const & rhs) {

	Fixed	newInstance( this->toFloat() / rhs.toFloat() );

	return newInstance;
}


Fixed & Fixed::operator++( void ) {

	this->_nb += 1;

	return *this;
}

Fixed Fixed::operator++( int ) {

	Fixed	newInstance = *this;

	operator++();
	return newInstance;
}

Fixed & Fixed::operator--( void ) {

	this->_nb -= 1;

	return *this;
}

Fixed Fixed::operator--( int ) {

	Fixed	newInstance = *this;

	operator--();
	return newInstance;
}


Fixed & Fixed::max(Fixed & first, Fixed & second) {

	if (first > second)
		return first;
	return second;
}

const Fixed & Fixed::max(const Fixed & first, const Fixed & second) {

	if (first > second)
		return first;
	return second;
}

Fixed & Fixed::min(Fixed & first, Fixed & second) {

	if (first < second)
		return first;
	return second;
}

const Fixed & Fixed::min(const Fixed & first, const Fixed & second) {

	if (first < second)
		return first;
	return second;
}


std::ostream & operator<<( std::ostream & o, Fixed const & i ) {

	o << i.toFloat();
	return o;
}