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

		int operator>( Fixed const & rhs ) const;
		int operator<( Fixed const & rhs ) const;
		int operator>=( Fixed const & rhs ) const;
		int operator<=( Fixed const & rhs ) const;
		int operator==( Fixed const & rhs ) const;
		int operator!=( Fixed const & rhs ) const;

		Fixed operator+( Fixed const & rhs );
		Fixed operator-( Fixed const & rhs );
		Fixed operator*( Fixed const & rhs );
		Fixed operator/( Fixed const & rhs );
		
		Fixed & operator++( void );
		Fixed operator++( int );
		Fixed & operator--( void );
		Fixed operator--( int );


		static Fixed & max(Fixed & first, Fixed & second);
		static const Fixed & max(const Fixed & first, const Fixed & second);
		static Fixed & min(Fixed & first, Fixed & second);
		static const Fixed & min(const Fixed & first, const Fixed & second);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;
	
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif