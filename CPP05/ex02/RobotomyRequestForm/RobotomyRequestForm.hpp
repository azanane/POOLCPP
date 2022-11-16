#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include "../Bureaucrat/Bureaucrat.hpp"
# include "../AForm/AForm.hpp"

class RobotomyRequestForm : public AForm {

	public:

		RobotomyRequestForm( std::string const & target );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

		virtual ~RobotomyRequestForm( void );

		const std::string &	getTarget() const;

	private:

		RobotomyRequestForm( void );

		const std::string	_target;
		const int			_gradeToSign;
		const int			_gradeToExecute;

		virtual void	_createForm() const;
};

std::ostream & operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif
