#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include "../Bureaucrat/Bureaucrat.hpp"
# include "../AForm/AForm.hpp"

class PresidentialPardonForm : public AForm {

	public:

		PresidentialPardonForm( std::string const & target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );

		virtual ~PresidentialPardonForm( void );

		const std::string &	getTarget() const;

	private:

		PresidentialPardonForm( void );

		const std::string	_target;
		const int			_gradeToSign;
		const int			_gradeToExecute;

		virtual void	_createForm() const;
};

#endif
