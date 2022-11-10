#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {

	std::cout << "Clap Trap class default constructor" << std::endl;

	this->_name = "Anas";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( std::string const & name ) : _name(name) {

	std::cout << "Clap Trap class name constructor" << std::endl;

	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "Clap Trap class copy constructor" << std::endl;

	*this = src;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "Clap Trap class destructor" << std::endl;
}


ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

void ClapTrap::attack( const std::string& target ) {

	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "Clap trap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;

		this->_energyPoints -= 1;
	}
	else
		std::cout << "Clap trap " << this->_name <<  " cannot attacks, a dead clap can't do anything..." << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {

	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
			std::cout << "Clap trap " << this->_name << " takes " << amount << " damages!" << std::endl;

			this->_hitPoints -= amount;
	}
	else
		std::cout << "Clap trap " << this->_name <<  " can't takes any damages, a dead clap can't take anything..." << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {

	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "Clap trap " << this->_name << " repair itself and regain " << amount << " _hitPoints!" << std::endl;

		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
	else
		std::cout << "Clap trap " << this->_name <<  " cannot repair, a dead clap can't do anything..." << std::endl;
}
