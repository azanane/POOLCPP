#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "../Bureaucrat/Bureaucrat.hpp"

class Form {

	public:

		Form( void );
		Form( std::string const & name, int const & gradeToSign, int const & gradeToExecute );
		Form( Form const & src );
		Form & operator=( Form const & rhs );

		~Form( void );

		const std::string &	getName() const;
		const bool        &	getSignedForm() const;
		const int         &	getGradeToSign() const;
		const int         &	getGradeToExecute() const;

		void	beSigned( Bureaucrat const & bureaucrat );

		void	assignConstInt(int const & val, int const & toVal);
		void	assignConstString(std::string const & val, std::string const & toVal);

		class GradeTooHighException : public std::exception {

			public:

				virtual const char * what() const throw() {return "Grade too high in Form.";}
		};

		class GradeTooLowException : public std::exception {

			public:

			virtual const char * what() const throw() {return "Grade too low in Form.";}
		};

	private:

		const std::string	_name;
		bool				_signedForm;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream & operator<<( std::ostream & o, Form const & i );

#endif
