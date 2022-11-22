#include "Data.hpp"

Data::Data( void ) {}

Data::Data( Data const & src ) {

	*this = src;
}

Data & Data::operator=( Data const & rhs ) {

	this->dataContent = rhs.dataContent;

	return *this;
}

Data::~Data( void ) {}
