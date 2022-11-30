#include "Span.hpp"

Span::Span( void ) {}

Span::Span( unsigned int const N ) : _size(N) {}

Span::Span( Span const & src ) {

	*this = src;
}

Span & Span::operator=( Span const & rhs ) {

	this->_size = rhs._size;

	// for (std::vector<int>::iterator it = )
	this->_container = rhs._container;

	return *this;
}

Span::~Span( void ) {}

void	Span::addNumber( int const numberToAdd ) {

	if (this->_container.size() < this->_size)
		this->_container.push_back(numberToAdd);
	else
		throw Span::LengthError(); 
}

void	Span::addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {

	std::vector<int>::iterator	ptr;
	unsigned int				rangeSize = 0;

	for (ptr = begin; ptr < end; ++ptr)
		++rangeSize;

	if (this->_container.size() + rangeSize > this->_size)
		throw Span::LengthError();

	for (ptr = begin; ptr < end; ++ptr) {

		this->_container.push_back(*ptr);
	}
}

int	Span::longestSpan( void ) const {

	if (this->_container.size() == 0)
		return 0;

	std::pair<std::__1::vector<int>::const_iterator, std::__1::vector<int>::const_iterator> MinMax;
	
	MinMax = std::minmax_element(this->_container.begin(), this->_container.end());

	return (*MinMax.second - *MinMax.first);
}

int	Span::shortestSpan( void ) {

	std::sort(this->_container.begin(), this->_container.end());

	int	getShort;
	int	count = 0;

	std::vector<int>::iterator	it;
	std::vector<int>::iterator	cmpIt;
	for (it = this->_container.begin(); it != this->_container.end(); ++it) {

		if (count == 1) {

			if (*it > *cmpIt)
				getShort = *it - *cmpIt;
			else
				getShort = *cmpIt - *it;
		}
		else if (count > 1) {

			if (*it > *cmpIt && getShort > *it - *cmpIt)
				getShort = *it - *cmpIt;
			else if (*cmpIt >= *it && getShort > *cmpIt - *it)
				getShort = *cmpIt - *it;
		}

		cmpIt = it;
		++count;
	}
	if (count <= 1)
		return 0;
	
	return getShort;
}
