#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		void	msgGuardGate( std::string className );

	public:
		//default constructor
		ScavTrap( void );

		//param constructor
		ScavTrap( char type );
		ScavTrap( std::string name );

		//copy constructor
		ScavTrap( const ScavTrap& oher );

		//destructor
		virtual	~ScavTrap( void );

		//m-methods
		void		attack( std::string const& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		void		guardGate( void );
		void		status( void );
	
};

#endif