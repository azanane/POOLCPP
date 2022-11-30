#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <stack>
# include <iterator>

# define PRINT(x) std::cout << x << std::endl;

template <typename type>
class MutantStack : public std::stack<type> {

	public:

		MutantStack( void );
		MutantStack( MutantStack<type> const & src );
		MutantStack & operator=( MutantStack<type> const & rhs );

		~MutantStack( void );

		typedef typename MutantStack<type>::container_type::iterator	iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
};

template <typename type>
MutantStack<type>::MutantStack( void ) {}

template <typename type>
MutantStack<type>::MutantStack( MutantStack<type> const & src ) {

	*this = src;
}

template <typename type>
MutantStack<type> & MutantStack<type>::operator=( MutantStack<type> const & rhs ) {

	this->_vectorStack.erase(this->_vectorStack.begin(), this->_vectorStack.end());

	while (!rhs.empty()) {

		this->_vectorStack.push_back(rhs.top());
		rhs.pop();
	}

	typename std::vector<type>::iterator it;
	for (it = this->_vectorStack.begin; it != this->_vectorStack.end(); ++it) {

		rhs.push(*it);
		push(*it);
	}

	return *this;
}

template <typename type>
MutantStack<type>::~MutantStack( void ) {}

#endif
