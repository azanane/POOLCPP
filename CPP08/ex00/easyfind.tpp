#include <iostream>

template<typename T<int>>
int	easyfind( T<int> & container, int toFind ) {

	for (std::T<int>::iterator it = container.begin(); it != container.end(); ++it) {

		if (*it == toFind)
			return 0;
	}

	return -1;
}
