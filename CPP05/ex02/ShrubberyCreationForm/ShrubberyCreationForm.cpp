#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("Shrubbery Form", 145, 137), _target("Random target"), _gradeToSign(145),
_gradeToExecute(137) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target )  : AForm("Shrubbery Form", 145, 137), _target(target), _gradeToSign(145),
_gradeToExecute(137) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : AForm("Shrubbery Form", 145, 137), _target(src._target), _gradeToSign(145),
_gradeToExecute(137) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {

	this->assignConstString(this->_target, rhs._target);
	this->assignConstInt(this->_gradeToSign, 145);
	this->assignConstInt(this->_gradeToExecute, 137);

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

void	ShrubberyCreationForm::_createForm() const {

	std::fstream	fs;

	fs.open(this->_target + "_shrubbery", std::fstream::out | std::fstream::trunc);

	if (!fs.good())
		throw ShrubberyCreationForm::ErrorInOpen();

	fs <<
	"              * *\n"
	"           *    *  *\n"
	"      *  *    *     *  *\n"
	"     *     *    *  *    *\n"
	" * *   *    *    *    *   *\n"
	" *     *  *    * * .#  *   *\n"
	" *   *     * #.  .# *   *\n"
	"  *     \"#.  #: #\" * *    *\n"
	" *   * * \"#. ##\"       *\n"
	"   *       \"###\n"
	"             \"##\n"
	"              ##.\n"
	"              .##:\n"
	"              :###\n"
	"              ;###\n"
	"            ,####.\n"
	"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";

	fs.close();
}

const std::string &	ShrubberyCreationForm::getTarget() const {return this->_target;}
