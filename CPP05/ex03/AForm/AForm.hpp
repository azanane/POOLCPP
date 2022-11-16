#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "../Bureaucrat/Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	public:

		AForm( std::string const & name, int const & gradeToSign, int const & gradeToExecute );
		AForm( AForm const & src );
		AForm & operator=( AForm const & rhs );

		virtual ~AForm( void );

		void	beSigned( Bureaucrat const & bureaucrat );
		void	execute( Bureaucrat const & executor ) const;

		const std::string &	getName() const;
		const bool        &	getSignedAForm() const;
		const int         &	getGradeToSign() const;
		const int         &	getGradeToExecute() const;


		void	assignConstInt(int const & val, int const & toVal);
		void	assignConstString(std::string const & val, std::string const & toVal);

		class GradeTooHighException : public std::exception {

			public:

				virtual const char * what() const throw() {return "Grade too high in AForm.";}
		};

		class GradeTooLowException : public std::exception {

			public:

			virtual const char * what() const throw() {return "Grade too low in AForm.";}
		};

		class NotSignedForm : public std::exception {

			public:

				virtual const char * what() const throw() {return "Form not signed before execute in Shrubbery Creation Form.";}
		};

	protected:

		virtual void	_createForm() const = 0;

	private:

		AForm( void );

		const std::string	_name;
		bool				_signedAForm;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream & operator<<( std::ostream & o, AForm const & i );

#endif
