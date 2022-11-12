#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {

	std::cout << "Frag Trap class default constructor" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name) {

	std::cout << "Frag Trap class string constructor" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src._name) {

	std::cout << "Frag Trap class copy constructor" << std::endl;

	*this = src;
}

FragTrap::~FragTrap( void ) {

	std::cout << "Frag Trap class destructor" << std::endl;
}


FragTrap & FragTrap::operator=( FragTrap const & rhs ) {

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

void	FragTrap::highFiveGuys() {

	std::cout << "Frag " << this->_name << " asking for a high five!" << std::endl;
}