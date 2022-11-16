#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# define PRINT(x) std::cout << x << std::endl;

class WrongAnimal {

	public:

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		WrongAnimal & operator=( WrongAnimal const & rhs );

		~WrongAnimal( void );

		void				makeSound() const;
		std::string			getType() const;

	protected:

		std::string	_type;
};

#endif