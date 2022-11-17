#include "AForm.hpp"

AForm::AForm( void ) : _name("Random Form"), _gradeToSign(1), _gradeToExecute(1) {}

AForm::AForm( std::string const & name, int const & gradeToSign, int const & gradeToExecute ) : _name(name), _signedAForm(false), 
_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {

	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( AForm const & src ) : _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {

	*this = src;
}

AForm & AForm::operator=( AForm const & rhs ) {

	this->assignConstString(this->_name, rhs._name);

	if (rhs._gradeToSign < 1 || rhs._gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (rhs._gradeToSign > 150 || rhs._gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	else
	{
		this->assignConstInt(this->_gradeToSign, rhs._gradeToSign);
		this->assignConstInt(this->_gradeToExecute, rhs._gradeToExecute);
	}

	return *this;
}

AForm::~AForm( void ) {}

void	AForm::beSigned( Bureaucrat const & bureaucrat ) {

	if (this->_signedAForm)
		PRINT(this->_name << " is already signed")
	else if (bureaucrat.getGrade() <= this->_gradeToSign) {

		this->_signedAForm = true;
		bureaucrat.signForm(this->_name, this->_signedAForm);
	}
	else
	{
		bureaucrat.signForm(this->_name, this->_signedAForm);
		throw AForm::GradeTooLowException();
	}

}

void AForm::execute( Bureaucrat const & executor ) const {

	if (executor.getGrade() <= this->_gradeToExecute && this->getSignedAForm() == true)
		this->_createForm();
	else if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
	else if (this->getSignedAForm() == false)
		throw AForm::NotSignedForm();
}

const std::string &	AForm::getName() const {return this->_name;}
const bool        &	AForm::getSignedAForm() const {return this->_signedAForm;}
const int         &	AForm::getGradeToSign() const {return this->_gradeToSign;}
const int         &	AForm::getGradeToExecute() const {return this->_gradeToExecute;}


void	AForm::assignConstInt(int const & val, int const & toVal) {

	int*	modify;

	modify = (int*)&val;
	*modify = (int)toVal;	
}

void	AForm::assignConstString(std::string const & val, std::string const & toVal) {

	std::string*	modify;

	modify = (std::string*)&val;
	*modify = (std::string)toVal;	
}

std::ostream & operator<<( std::ostream & o, AForm const & i ) {

	o << "AForm : ";
	o << i.getName();
	o << std::endl << "AForm is signed : ";
	o << i.getSignedAForm();
	o << std::endl << "Grade to sign the Aform : ";
	o << i.getGradeToSign();
	o << std::endl << "Grade to execute the Aform : ";
	o << i.getGradeToExecute();
	o << std::endl;

	return o;
}
