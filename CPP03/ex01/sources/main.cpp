#include "../includes/ScavTrap.hpp"

int	main( void )
{
	ScavTrap	scave("Anas");

	scave.guardGate();
	scave.attack("Max");
	
	return 0;
}