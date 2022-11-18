#include "Intern.hpp"

const std::string Intern::_compare[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

Intern::Intern( void ) {}

Intern::Intern( Intern const & src ) {

	*this = src;
}

Intern & Intern::operator=( Intern const & rhs ) {

	if (this == &rhs) {}

	return *this;
}

Intern::~Intern( void ) {}

AForm* Intern::makeForm( std::string const & formName, std::string const & target ) const {

	int	search = -1;
	for (int i = 0; i < 3; i++) {
		
		if (formName.compare(this->_compare[i]) == 0)
			search = i;
	}

	switch (search) {
		case 0:
			return new ShrubberyCreationForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new PresidentialPardonForm(target);
		default:
			throw Intern::UnexistantForm();
	}
}
