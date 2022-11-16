#ifndef DOG_HPP
# define DOG_HPP

# include "../AAnimal/AAnimal.hpp"
# include "../Brain/Brain.hpp"

class Dog : public AAnimal {

	public:

		Dog( void );
		Dog( Dog const & src );
		Dog & operator=( Dog const & rhs );

		~Dog( void );

		virtual void		makeSound() const;

	private:

		Brain*	_brain;
};

#endif