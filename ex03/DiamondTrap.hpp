#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

	public:
		//default constructor
		DiamondTrap( void );

		//param constructor
		DiamondTrap( std::string name );

		//copy constructor
		DiamondTrap( const DiamondTrap& oher );

		//destructor
		~DiamondTrap( void );

		//[=] operator overload
		DiamondTrap& operator= ( const DiamondTrap& other );

		//m-methods
		//overrided
		void		status( void );
		void		attack( std::string const& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		
		//new
		void		highFivesGuys( void );
};

#endif