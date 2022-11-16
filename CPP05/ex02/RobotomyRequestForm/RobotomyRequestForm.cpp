#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("Robotomy Request Form", 72, 45), _target("Random target"), _gradeToSign(72),
_gradeToExecute(45) {}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target )  : AForm("Robotomy Request Form", 72, 45), _target(target), _gradeToSign(72),
_gradeToExecute(45) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : AForm("Robotomy Request Form", 72, 45), _target(src._target), _gradeToSign(72),
_gradeToExecute(45) {}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {

	this->assignConstString(this->_target, rhs._target);
	this->assignConstInt(this->_gradeToSign, 72);
	this->assignConstInt(this->_gradeToExecute, 45);

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

void	RobotomyRequestForm::_createForm() const {

	PRINT("*BRRRRRR BRRRRRR*")

	if (std::rand() % 2 == 0)
		PRINT(this->_target << " successfully robotized.")
	else
		PRINT(this->_target << " robotization failure.")
}

const std::string &	RobotomyRequestForm::getTarget() const {return this->_target;}