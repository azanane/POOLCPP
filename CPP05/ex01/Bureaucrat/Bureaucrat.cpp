#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Random bureaucrat") {

	this->_grade = 150;
}

Bureaucrat::Bureaucrat( std::string const & name, int const & grade ) : _name(name), _grade(grade) {

	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {

	*this = src;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs ) {

	std::string*	modifyName;

	modifyName = (std::string*)&this->_name;
	*modifyName = (std::string)rhs._name;

	if (rhs._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (rhs._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = rhs._grade;

	return *this;
}

Bureaucrat::~Bureaucrat( void ) {}

const std::string	&Bureaucrat::getName() const {return this->_name;}
const int			&Bureaucrat::getGrade() const {return this->_grade;}

void	Bureaucrat::signForm( std::string const & formName, bool const & signedForm ) const {

	if (signedForm)
		PRINT(this->_name << " signed " << formName)
	else
		PRINT(this->_name << " couldn't sign " << formName << " because he don't have the required grade")
}

Bureaucrat & Bureaucrat::operator++( void ) {

	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;

	return *this;
}

Bureaucrat Bureaucrat::operator++( int ) {

	Bureaucrat	newInstance = *this;

	operator++();
	return newInstance;
}

Bureaucrat & Bureaucrat::operator--( void ) {

	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;

	return *this;
}

Bureaucrat Bureaucrat::operator--( int ) {

	Bureaucrat	newInstance = *this;

	operator--();
	return newInstance;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i ) {

	o << i.getName();
	o << ", bureaucrat grade ";
	o << i.getGrade();
	o << std::endl;

	return o;
}
