#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# define PRINT(x) std::cout << x << std::endl;

class Animal {

	public:

		Animal( void );
		Animal( Animal const & src );
		Animal & operator=( Animal & rhs );

		virtual ~Animal( void );

		virtual void		makeSound() const;
		std::string	getType() const;

	protected:

		std::string	_type;
};

#endif