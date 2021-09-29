#include "ScavTrap.hpp"

//protected
void	ScavTrap::msgGuardGate( std::string className )
{
	std::cout << F_R_GRN << className << " " << F_R_PRPL << getName() << F_R_GRN << " have entered in Gate keeper mode." << RESET << std::endl;
}

//default constructor
ScavTrap::ScavTrap( void )
	: ClapTrap()
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Default constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
ScavTrap::ScavTrap( char type )
{
	if (type == 's')
	{
		this->setEnergyPoints( 50 );
	}
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Parametric constructor started. " << ++className << " " << F_R_PRPL << this->getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

ScavTrap::ScavTrap( std::string name )
	: ClapTrap( name, 100, 50, 20 )
{
	// ClapTrap( name, 100, 50, 20 );
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Parametric constructor started. " << ++className << " " << F_R_PRPL << this->getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//copy constructor
ScavTrap::ScavTrap( const ScavTrap& other )
{
	*this = other;
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Copy constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//destructor
ScavTrap::~ScavTrap( void )
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_YLLW << "Destructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_YLLW << " destructed." << RESET << std::endl;
}

//m-methods
void	ScavTrap::attack( std::string const& target )
{
	msgAttack( "ScavTrap", target );
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	setAttackDamage( getAttackDamage() + amount );
	msgTakeDamage( "ScavTrap", getAttackDamage() );
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	if ( getEnergyPoints() - amount < 0 )
		msgBeRepairedN( "ScavTrap" );
	else
	{
		setEnergyPoints( getEnergyPoints() - amount );
		setAttackDamage( getAttackDamage() - amount );
		msgBeRepairedY( "ScavTrap", amount );
	}
}

void	ScavTrap::guardGate( void )
{
	msgGuardGate( "ScavTrap" );
}

void	ScavTrap::status( void )
{
	msgStatus( "ScavTrap" );
}