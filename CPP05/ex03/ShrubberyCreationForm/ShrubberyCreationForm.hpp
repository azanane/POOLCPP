#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "../Bureaucrat/Bureaucrat.hpp"
# include "../AForm/AForm.hpp"

class ShrubberyCreationForm : public AForm {

	public:

		ShrubberyCreationForm( std::string const & target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );

		virtual ~ShrubberyCreationForm( void );

		const std::string &	getTarget() const;

		class ErrorInOpen : public std::exception {

			public:

				virtual const char * what() const throw() {return "Error while opening file in Shrubbery Creation Form.";}
		};


	private:

		ShrubberyCreationForm( void );

		const std::string	_target;
		const int			_gradeToSign;
		const int			_gradeToExecute;

		virtual void	_createForm() const;
};

#endif
