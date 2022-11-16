#include "Form.hpp"

Form::Form( void ) : _name("Random Form"), _signedForm(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form( std::string const & name, int const & gradeToSign, int const & gradeToExecute ) : _name(name), _signedForm(false), 
_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {

	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( Form const & src ) : _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {

	*this = src;
}

Form & Form::operator=( Form const & rhs ) {

	this->assignConstString(this->_name, rhs._name);

	if (rhs._gradeToSign < 1 || rhs._gradeToExecute)
		throw Form::GradeTooHighException();
	if (rhs._gradeToSign > 150 || rhs._gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else
	{
		this->assignConstInt(this->_gradeToSign, rhs._gradeToSign);
		this->assignConstInt(this->_gradeToExecute, rhs._gradeToExecute);
	}

	return *this;
}

Form::~Form( void ) {}

const std::string &	Form::getName() const {return this->_name;}
const bool        &	Form::getSignedForm() const {return this->_signedForm;}
const int         &	Form::getGradeToSign() const {return this->_gradeToSign;}
const int         &	Form::getGradeToExecute() const {return this->_gradeToExecute;}

void	Form::beSigned( Bureaucrat const & bureaucrat ) {

	if (bureaucrat.getGrade() <= this->_gradeToSign) {

		this->_signedForm = true;
		bureaucrat.signForm(this->_name, this->_signedForm);
	}
	else
	{
		bureaucrat.signForm(this->_name, this->_signedForm);
		throw Form::GradeTooLowException();
	}

}

void	Form::assignConstInt(int const & val, int const & toVal) {

	int*	modify;

	modify = (int*)&val;
	*modify = (int)toVal;	
}

void	Form::assignConstString(std::string const & val, std::string const & toVal) {

	std::string*	modify;

	modify = (std::string*)&val;
	*modify = (std::string)toVal;	
}


std::ostream & operator<<( std::ostream & o, Form const & i ) {

	o << "Form : ";
	o << i.getName();
	o << std::endl << "Form is signed : ";
	o << i.getSignedForm();
	o << std::endl << "Grade to sign the form : ";
	o << i.getGradeToSign();
	o << std::endl << "Grade to execute the form : ";
	o << i.getGradeToExecute();
	o << std::endl;

	return o;
}
