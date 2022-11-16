#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <fstream>
# include "../Bureaucrat/Bureaucrat.hpp"
# include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"
# include "../RobotomyRequestForm/RobotomyRequestForm.hpp"
# include "../PresidentialPardonForm/PresidentialPardonForm.hpp"

class Intern {

	public:

		Intern( void );
		Intern( Intern const & src );
		Intern & operator=( Intern const & rhs );

		~Intern( void );

		AForm* makeForm( std::string const & formName, std::string const & target ) const;

		class UnexistantForm : public std::exception {

			public:

				virtual const char * what() const throw() {return "Form doesn't exist (Form's name need to be: \"shrubbery creation\", \"robotomy request\" or \"presidential pardon\").";}
		};

	private:

		static const std::string _compare[3];	
};

#endif
