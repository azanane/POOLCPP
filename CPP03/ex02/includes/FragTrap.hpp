#ifndef FragTRAP_HPP
# define FragTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:

		FragTrap( std::string const & name );
		FragTrap( FragTrap const & src );
		FragTrap & operator=( FragTrap const & rhs );
		~FragTrap( void );

		void highFiveGuys( void );
};

#endif