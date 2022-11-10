#include "../includes/ClapTrap.hpp"

int	main( void )
{
	ClapTrap	clap("Max");
	ClapTrap	newClap.attack("Max");
	
	clap.takeDamage(9);
	clap.beRepaired(2);
	
	clap.takeDamage(3);
	clap.beRepaired(2);
	
	return 0;
}