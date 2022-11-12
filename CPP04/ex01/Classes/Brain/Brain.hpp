#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "../Animal/Animal.hpp"

class Brain {

	public:

		Brain( void );
		Brain( Brain const & src );
		Brain & operator=( Brain & rhs );

		~Brain( void );

	private:

		std::string _ideas[100];
};

#endif