#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap( T & firstValue, T & secondValue ) {

	T	& tmpValue = firstValue;

	firstValue = secondValue;
	secondValue = tmpValue;
}

template<typename T>
T const & min( T const & firstValue, T const & secondValue ) {

	if (firstValue < secondValue)
		return firstValue;
	
	return secondValue;
}

template<typename T>
T const & max( T const & firstValue, T const & secondValue ) {

	if (firstValue > secondValue)
		return firstValue;
	
	return secondValue;
}

#endif
