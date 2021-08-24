#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <typeinfo>

# define RESET "\033[0m"

# define F_R_BLCK "\033[0;30m"
# define F_R_RED "\033[0;31m"
# define F_R_GRN "\033[0;32m"
# define F_R_YLLW "\033[0;33m"
# define F_R_BLU "\033[0;34m"
# define F_R_PRPL "\033[0;35m"
# define F_R_CYAN "\033[0;36m"
# define F_R_WHT "\033[0;37m"

# define F_B_BLCK "\033[1;30m"
# define F_B_RED "\033[1;31m"
# define F_B_GRN "\033[1;32m"
# define F_B_YLLW "\033[1;33m"
# define F_B_BLU "\033[1;34m"
# define F_B_PRPL "\033[1;35m"
# define F_B_CYAN "\033[1;36m"
# define F_B_WHT "\033[1;37m"

# define B_BLCK "\033[7;30m"
# define B_RED "\033[7;31m"
# define B_GRN "\033[7;32m"
# define B_YLLW "\033[7;33m"
# define B_BLU "\033[7;34m"
# define B_PRPL "\033[7;35m"
# define B_CYAN "\033[7;36m"
# define B_WHT "\033[7;37m"

class ClapTrap
{
	protected:
		std::string	m_name;
		int			m_hitpoints;
		int			m_energyPoints;
		int			m_attackDamage;
		void		msgStatus( std::string className );
		void		msgAttack( std::string className, std::string target );
		void		msgTakeDamage( std::string className, unsigned int amount );
		void		msgBeRepairedN( std::string className );
		void		msgBeRepairedY( std::string className, unsigned int amount );

	public:
		//default constructor
		ClapTrap( void );

		//param constructor
		ClapTrap( std::string name );
		ClapTrap( std::string name, int hp, int ep, int ad );

		//copy constructor
		ClapTrap( const ClapTrap& oher );

		//destructor
		~ClapTrap( void );

		//[=] operator overload
		ClapTrap& operator= ( const ClapTrap& other );
		
		//setter
		void		setName( std::string name );
		void		setHitPoints( int hp );
		void		setEnergyPoints( int ep );
		void		setAttackDamage( int ad );

		//getter
		std::string	getName( void ) const;
		int			getHitPoints( void ) const;
		int			getEnergyPoints( void ) const;
		int			getAttackDamage( void ) const;

		//m-methods
		void		attack( std::string const& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		void		status( void );
	
	
		
};

#endif