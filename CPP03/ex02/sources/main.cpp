#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main( void )
{
	ScavTrap	scave("Anas");
	FragTrap	frag("Max");

	scave.guardGate();
	scave.attack("Max");
	frag.takeDamage(20);
	
	frag.highFiveGuys();
	frag.attack("Anas");
	scave.takeDamage(30);

	return 0;
}