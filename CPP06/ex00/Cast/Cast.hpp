#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# define PRINT(x) std::cout << x << std::endl;

class Cast {

	public:

		Cast( char* const nbToCast, std::string const & type );
		Cast( Cast const & src );
		Cast & operator=( Cast const & rhs );

		~Cast( void );

		char		getNbChar() const;
		int			getNbInt() const;
		float		getNbFloat() const;
		double		getNbDouble() const;

	private:

		Cast( void );

		char	_nbChar;
		int		_nbInt;
		float	_nbFloat;
		double	_nbDouble;

		int		_type;

		static const std::string _compareType[4];
};

#endif
