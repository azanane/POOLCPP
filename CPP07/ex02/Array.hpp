#ifndef ARRAY_HPP
# define ARRAY_HPP

# define PRINT(x) std::cout << x << std::endl;

template <class arrayType>
class Array {

	public:

		Array( void );
		Array( unsigned int const n );
		Array( Array<arrayType> const & src );
		Array & operator=( Array<arrayType> const & rhs );

		~Array( void );

		arrayType & operator[]( int const index ) const;

		unsigned int const &	size() const;

		class InvalidIndex : public std::exception {

			public:

				virtual const char * what() const throw() {return "Invalid index in subscript operator.";}
		};

	private:

		arrayType		*_array;
		unsigned int	_size;
};


template <class arrayType>
Array<arrayType>::Array( void ) : _array(NULL), _size(0) {}

template <class arrayType>
Array<arrayType>::Array( unsigned int const n ) : _array(new arrayType[n]), _size(n) {}

template <class arrayType>		
Array<arrayType>::Array( Array<arrayType> const & src ) {

	this->_array = NULL;	
	*this = src;
}

template <class arrayType>		
Array<arrayType> & Array<arrayType>::operator=( Array<arrayType> const & rhs ) {

	if (this == &rhs)
		return *this;

	if (this->_size > 0 && this->_array != NULL)
		delete [] this->_array;

	this->_array = new arrayType[rhs._size];
	for (unsigned int i = 0; i < rhs._size; i++)
		this->_array[i] = rhs._array[i];

	this->_size = rhs._size;

	return *this;
}

template <class arrayType>
Array<arrayType>::~Array( void ) {

	if (this->_size > 0)	
		delete [] this->_array;
}

template <class arrayType>
arrayType & Array<arrayType>::operator[]( int const index ) const {

	if (index < 0 || index > (int const)this->_size - 1)
		throw Array::InvalidIndex();
	
	return this->_array[index];
}

template <class arrayType>
unsigned int const &	Array<arrayType>::size() const {return this->_size;}


#endif
