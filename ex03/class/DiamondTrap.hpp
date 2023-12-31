#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &src );
		~DiamondTrap( void );

		DiamondTrap	&operator=( const DiamondTrap &src );

		std::string	get_name( void ) const;

		void whoAmI( void );

	private:

		std::string	_name;
};

std::ostream	&operator<<( std::ostream &o, const DiamondTrap &src );

#endif
