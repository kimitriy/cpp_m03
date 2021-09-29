#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	m_name;
		
	public:
		//default constructor
		DiamondTrap( void );

		//param constructor
		DiamondTrap( std::string name );

		//copy constructor
		DiamondTrap( const DiamondTrap& oher );

		//destructor
		virtual	~DiamondTrap( void );

		//getter
		std::string	getName( void ) const;

		//m-methods
		void		attack( std::string const& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		void		guardGate( void );
		void		highFivesGuys( void );
		void		whoAmI( void );
		void		status( void );
};

#endif