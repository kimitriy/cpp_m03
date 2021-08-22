#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		//default constructor
		ScavTrap( void );

		//param constructor
		ScavTrap( std::string name );

		//copy constructor
		ScavTrap( const ScavTrap& oher );

		//destructor
		~ScavTrap( void );

		//[=] operator overload
		ScavTrap& operator= ( const ScavTrap& other );

		//m-methods
		//overrided
		void		status( void );
		void		attack( std::string const& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		
		//new
		void		guardGate( void );
};

#endif