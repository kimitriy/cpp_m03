#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		// std::string	m_name;
		// int			m_hitpoints;
		// int			m_energyPoints;
		// int			m_attackDamage;

	public:
		//default constructor
		ScavTrap( void );

		//param constructor
		ScavTrap( std::string name, int hp, int ep, int ad );

		//copy constructor
		ScavTrap( const ClapTrap& oher );

		//destructor
		~ScavTrap( void );

		//[=] operator overload
		ScavTrap& operator= ( const ClapTrap& other );
		
		//setter
		// void		setEnergyPoints( int ep );
		// void		setAttackDamage( int ad );

		//getter
		// std::string	getName( void );
		// int			getHitPoints( void );
		// int			getEnergyPoints( void );
		// int			getAttackDamage( void );

		//m-methods
		// void		status( void );
		// void		attack( std::string const& target );
		// void		takeDamage( unsigned int amount );
		// void		beRepaired( unsigned int amount );
		void		guardGate( void );
};

#endif