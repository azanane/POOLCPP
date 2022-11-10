#include "../includes/ClapTrap.hpp"

int	main( void )
{
	ClapTrap	clap("Max");
	ClapTrap	newClap(clap);
	ClapTrap	lastClap;
	
	std::cout << std::endl;

	clap.takeDamage(9);
	clap.beRepaired(2);
	
	clap.takeDamage(3);
	clap.beRepaired(2);

	std::cout << std::endl;
	lastClap.takeDamage(16);
	lastClap.beRepaired(1);

	std::cout << std::endl;

	return 0;
}