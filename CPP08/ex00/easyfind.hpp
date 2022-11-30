#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# define PRINT(x) std::cout << x << std::endl;

template< typename Container >
typename Container::iterator	easyfind( Container & container, int toFind ) {

	return std::find(container.begin(), container.end(), toFind);
}

#endif
