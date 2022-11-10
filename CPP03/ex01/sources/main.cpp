#include "../includes/ScavTrap.hpp"

int	main( void )
{
	ScavTrap	scav("Max");
	ScavTrap	newScav(scav);
	ScavTrap	lastScav;
	
	std::cout << std::endl;

	scav.takeDamage(9);
	scav.beRepaired(2);
	
	scav.takeDamage(3);
	scav.beRepaired(2);

	std::cout << std::endl;
	lastScav.takeDamage(100);
	lastScav.beRepaired(1);

	std::cout << std::endl;

	return 0;
}