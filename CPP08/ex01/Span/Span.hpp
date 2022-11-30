#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iterator>
# include <vector>
# include <algorithm>
# include <stdexcept>

# define PRINT(x) std::cout << x << std::endl;

class Span {

	public:

		Span( unsigned int const N );
		Span( Span const & src );
		Span & operator=( Span const & rhs );
		
		virtual ~Span( void );

		void	addNumber( int const numberToAdd );
		void	addRange( std::vector<int>::iterator begin, std::vector<int>::iterator end );

		int	shortestSpan( void );
		int	longestSpan( void ) const;

		class LengthError : public std::exception {

			public:

				virtual const char * what() const throw() {return "Length error.";}
		};

	private:

		Span( void );

		unsigned int		_size;
		std::vector<int>	_container;

};

#endif
