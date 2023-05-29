#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <iostream>
# include <string>

# define PRINT(x) std::cout << x << std::endl;
# define PRINTWOENDL(x) std::cout << x;

template<class T>
class PmergeMe {

	public:

		PmergeMe( T& inputStack, const size_t K );
		PmergeMe( PmergeMe<T> const & src );
		PmergeMe & operator=( PmergeMe<T> const & rhs );

		void sort(size_t K, size_t p, size_t r);
		void merge(size_t p, size_t q, size_t r);
		void insertionSort(size_t p, size_t q);
		
		~PmergeMe( void );

	private:

		PmergeMe( void );

		T	_TList;

};

template<class T>
PmergeMe<T>::PmergeMe( T& inputStack, const size_t K ) : _TList(inputStack) {

	sort(K, 0, this->_TList.size() - 1);
	inputStack = this->_TList;
}

template<class T>
PmergeMe<T>::PmergeMe( void ) {}

template<class T>
PmergeMe<T>::PmergeMe( PmergeMe<T> const & src ) {

	*this = src;
}

template<class T>
PmergeMe<T> & PmergeMe<T>::operator=( PmergeMe<T> const & rhs ) {

	this->_TList = rhs._TList;

	return *this;
}
		
template<class T>
PmergeMe<T>::~PmergeMe( void ) {}

template<class T>
void PmergeMe<T>::sort(size_t K, size_t p, size_t r) {

	if (r - p > K) {

        size_t q = (p + r) / 2;

        sort(K, p, q);
        sort(K, q + 1, r);
        merge(p, q, r);
    }
	else {
    
	    insertionSort(p, r);
    }
}

template<class T>
void PmergeMe<T>::merge(size_t p, size_t q, size_t r) {

	size_t n1 = q - p + 1;
    size_t n2 = r - q;

    T LA;
	for (typename T::const_iterator it = this->_TList.begin() + p; it < this->_TList.end() - q + 1; it++) {

		LA.push_back(*it);
	}

    T RA;
	for (typename T::const_iterator it = this->_TList.begin() + q + 1; it < this->_TList.end(); it++) {

		RA.push_back(*it);
	}

    size_t RIDX = 0;
    size_t LIDX = 0;

    for (size_t i = p; i < r - p + 1; i++) {

        if (RIDX == n2) {
	
            this->_TList[i] = LA[LIDX];
            LIDX++;	
        } 
		else if (LIDX == n1) {

            this->_TList[i] = RA[RIDX];
            RIDX++;
        } 
		else if (RA[RIDX] > LA[LIDX]) {

            this->_TList[i] = LA[LIDX];
            LIDX++;
        } 
		else {

            this->_TList[i] = RA[RIDX];
            RIDX++;
        }
    }
}

template<class T>
void PmergeMe<T>::insertionSort(size_t p, size_t q) {

  	for (size_t i = p; i < q; i++) {

    	int		tempVal = this->_TList[i + 1];
    	size_t	j = i + 1;

    	while (j > p && this->_TList[j - 1] > tempVal) {

    	    this->_TList[j] = this->_TList[j - 1];
    	    j--;
    	}

  		this->_TList[j] = tempVal;
    }
}

#endif
