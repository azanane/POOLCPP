#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template<typename T>
int	easyfind( T<int> const & container, int toFind ) {

	for (std::T::iterator it = container.begin(); it != container.end(); ++it) {

		if (*it == toFind)
			return 0;
	}

	return -1;
}

#endif
