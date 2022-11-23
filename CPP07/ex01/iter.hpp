#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# define PRINT(x) std::cout << x << std::endl;

template<typename adress, typename size, typename function>
void	iter( adress *tab, size const & tabSize, function const & iterFunction ) {

	for (size i = 0; i < tabSize; i++) {

		iterFunction(tab[i]);
	}
}

#endif
