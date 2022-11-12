#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# define PRINT(x) std::cout << x << std::endl;

class AAnimal {

	public:

		AAnimal( void );
		AAnimal( AAnimal const & src );
		AAnimal & operator=( AAnimal & rhs );

		virtual ~AAnimal( void );

		virtual void		makeSound() const = 0;
		std::string			getType() const;

	protected:

		std::string	_type;
};

#endif