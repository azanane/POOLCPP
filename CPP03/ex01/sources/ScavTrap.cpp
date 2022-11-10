#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name) {

	std::cout << "Scav Trap class default constructor" << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src._name) {

	std::cout << "Scav Trap class copy constructor" << std::endl;

	*this = src;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "Scav Trap class destructor" << std::endl;
}


ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

void	ScavTrap::guardGate() {

	std::cout << "Scav " << this->_name << " to guard the gate!" << std::endl;
}