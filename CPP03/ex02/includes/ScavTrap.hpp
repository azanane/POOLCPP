#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:

		ScavTrap( void );
		ScavTrap( std::string const & name );
		ScavTrap( ScavTrap const & src );
		ScavTrap & operator=( ScavTrap const & rhs );
		~ScavTrap( void );

		void	attack( const std::string& target );
		void	guardGate();
};

#endif