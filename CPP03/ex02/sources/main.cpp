#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main( void )
{
	FragTrap	frag("Max");
	FragTrap	newFrag(frag);
	FragTrap	lastFrag;
	
	std::cout << std::endl;

	frag.takeDamage(9);
	frag.beRepaired(2);
	
	frag.takeDamage(3);
	frag.beRepaired(2);

	std::cout << std::endl;
	lastFrag.takeDamage(100);
	lastFrag.beRepaired(1);

	std::cout << std::endl;

	return 0;
}