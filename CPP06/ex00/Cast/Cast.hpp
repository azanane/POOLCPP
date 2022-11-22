#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# include <limits.h>
# define PRINT(x) std::cout << x << std::endl;

class Cast {

	public:

		Cast( char* const nbToCast, std::string const & type );
		Cast( Cast const & src );
		Cast & operator=( Cast const & rhs );

		~Cast( void );

		void		printNbChar() const;
		void		printNbInt() const;
		void		printNbFloat() const;
		void		printNbDouble();

	private:

		Cast( void );

		char	_nbChar;
		int		_nbInt;
		float	_nbFloat;
		double	_nbDouble;

		std::string	_type;
		char		*_nbToCast;
};

#endif
