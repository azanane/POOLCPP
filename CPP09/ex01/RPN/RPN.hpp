#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>
# include <string>

# define PRINT(x) std::cout << x << std::endl;

class RPN {

	public:

		RPN( const std::string& operation );
		RPN( RPN const & src );
		RPN & operator=( RPN const & rhs );
		
		~RPN( void );

		void	resolveOperation(const char operand);
		bool	isNumber(const std::string& operation, float *number) const;
		bool	isOperand(const char operand) const;

		class NullDivider : public std::exception {

			public:

				virtual const char * what() const throw() {return "Error : try to divide by 0";}
		};

		class RangeError : public std::exception {

			public:

				virtual const char * what() const throw() {return "Error : a number submitted should be between 0 and 9";}
		};

		class OperationError : public std::exception {

			public:

				virtual const char * what() const throw() {return "Error : unauthorized operation";}
		};


	private:

		RPN( void );

		std::stack<float> _operationStack;
};

#endif
