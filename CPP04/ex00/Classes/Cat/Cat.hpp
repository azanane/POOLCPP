#ifndef CAT_HPP
# define CAT_HPP

# include "../Animal/Animal.hpp"

class Cat : public Animal {

	public:

		Cat( void );
		Cat( Cat const & src );
		Cat & operator=( Cat & rhs );

		~Cat( void );

		virtual void		makeSound() const;
};

#endif