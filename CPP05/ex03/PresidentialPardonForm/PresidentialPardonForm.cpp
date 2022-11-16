#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("Presidential Pardon Form", 25, 5), _target("Random target"), _gradeToSign(25),
_gradeToExecute(5) {}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target )  : AForm("Presidential Pardon Form", 25, 5), _target(target), _gradeToSign(25),
_gradeToExecute(5) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : AForm("Presidential Pardon Form", 25, 5), _target(src._target), _gradeToSign(25),
_gradeToExecute(5) {}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {

	this->assignConstString(this->_target, rhs._target);
	this->assignConstInt(this->_gradeToSign, 25);
	this->assignConstInt(this->_gradeToExecute, 5);

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

void	PresidentialPardonForm::_createForm() const {

	PRINT(this->_target << " has been forgiven by His Eminence, the President Zaphod Beeblebrox.")
}

const std::string &	PresidentialPardonForm::getTarget() const {return this->_target;}