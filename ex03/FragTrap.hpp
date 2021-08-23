#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

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
		void		highFivesGuys( void );
};

#endif