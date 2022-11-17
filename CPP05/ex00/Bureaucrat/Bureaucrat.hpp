#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define PRINT(x) std::cout << x << std::endl;
# define PRINTNOEND(x) std::cout << x;

class Bureaucrat {

	public:

		Bureaucrat( void );
		Bureaucrat( std::string const & name, int const & grade );
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat & operator=( Bureaucrat const & rhs );

		~Bureaucrat( void );

		const std::string	&getName() const;
		const int			&getGrade() const;

		void	increaseGrade( void );
		void	decreaseGrade( void );

		class GradeTooHighException : public std::exception {

			public:

				virtual const char * what() const throw() {return "Grade too high for a bureaucrat (1 is the highest, 150 is the lowest).";}
		};

		class GradeTooLowException : public std::exception {

			public:

			virtual const char * what() const throw() {return "Grade too low for a bureaucrat (1 is the highest, 150 is the lowest).";}
		};

	private:

		const std::string			_name;
		int							_grade;
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i );

#endif
