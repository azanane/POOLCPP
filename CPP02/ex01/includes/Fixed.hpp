#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	private:

		int					_nb;
		static const int	_nb_bytes;

	public:

		Fixed( void );
		Fixed( int const construct_int );
		Fixed( float const construct_float );
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed & operator=( Fixed const & rhs );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;
	
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif