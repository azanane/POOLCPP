#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "../AAnimal/AAnimal.hpp"

class Brain {

	public:

		Brain( void );
		Brain( Brain const & src );
		Brain & operator=( Brain const & rhs );

		~Brain( void );

	private:

		std::string _ideas[100];
};

#endif