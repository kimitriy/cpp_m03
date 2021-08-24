#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	protected:
		void	msgHighFiveGuys( std::string className );

	public:
		//default constructor
		FragTrap( void );

		//param constructor
		FragTrap( std::string name );

		//copy constructor
		FragTrap( const FragTrap& oher );

		//destructor
		~FragTrap( void );

		//[=] operator overload
		FragTrap& operator= ( const FragTrap& other );

		//m-methods
		void		attack( std::string const& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		void		highFivesGuys( void );
		void		status( void );
};

#endif