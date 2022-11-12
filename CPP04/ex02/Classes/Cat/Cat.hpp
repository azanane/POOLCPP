#ifndef CAT_HPP
# define CAT_HPP

# include "../AAnimal/AAnimal.hpp"
# include "../Brain/Brain.hpp"

class Cat : public AAnimal {

	public:

		Cat( void );
		Cat( Cat const & src );
		Cat & operator=( Cat & rhs );

		~Cat( void );

		virtual void		makeSound() const;

	private:

		Brain*	_brain;
};

#endif