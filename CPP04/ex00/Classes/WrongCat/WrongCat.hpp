#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "../WrongAnimal/WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:

		WrongCat( void );
		WrongCat( WrongCat const & src );
		WrongCat & operator=( WrongCat & rhs );

		~WrongCat( void );

		void		makeSound() const;
};

#endif