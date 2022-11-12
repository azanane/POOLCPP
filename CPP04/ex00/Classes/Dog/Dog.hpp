#ifndef DOG_HPP
# define DOG_HPP

# include "../Animal/Animal.hpp"

class Dog : public Animal {

	public:

		Dog( void );
		Dog( Dog const & src );
		Dog & operator=( Dog & rhs );

		~Dog( void );

		virtual void		makeSound() const;
};

#endif