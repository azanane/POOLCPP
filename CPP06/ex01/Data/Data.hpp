#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# define PRINT(x) std::cout << x << std::endl;

class Data {

	public:

		Data( void );
		Data( Data const & src );
		Data & operator=( Data const & rhs );

		~Data( void );

		uintptr_t dataContent;
};

#endif