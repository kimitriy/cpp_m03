#include "FragTrap.hpp"

//protected
void	FragTrap::msgHighFiveGuys( std::string className )
{
	std::cout << F_R_GRN << className << " " << F_R_PRPL << getName() << F_R_GRN << " is requesting for high five to him." << RESET << std::endl;
}


//default constructor
FragTrap::FragTrap( void )
	: ClapTrap()
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Default constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
FragTrap::FragTrap( std::string name )
	: ClapTrap( name, 100, 100, 30 )
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Parametric constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//copy constructor
FragTrap::FragTrap( const FragTrap& other )
{
	*this = other;
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Copy constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//destructor
FragTrap::~FragTrap( void )
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_YLLW << "Destructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_YLLW << " destructed." << RESET << std::endl;
}

//[=] operator overload
FragTrap& FragTrap::operator= ( const FragTrap& other )
{
	if (this == &other)
		return ( *this );
	this->setName( other.getName() );
	this->setHitPoints( other.getHitPoints() );
	this->setEnergyPoints( other.getEnergyPoints() );
	this->setAttackDamage( other.getAttackDamage() );

	return ( *this );
}

//m-methods
void	FragTrap::attack( std::string const& target )
{
	msgAttack( "FragTrap", target );
}

void	FragTrap::takeDamage( unsigned int amount )
{
	setAttackDamage( getAttackDamage() + amount );
	msgTakeDamage( "FragTrap", getAttackDamage() );
}

void	FragTrap::beRepaired( unsigned int amount )
{
	if ( getEnergyPoints() - amount < 0 )
		msgBeRepairedN( "FragTrap" );
	else
	{
		setEnergyPoints( getEnergyPoints() - amount );
		setAttackDamage( getAttackDamage() - amount );
		msgBeRepairedY( "FragTrap", amount );
	}
}

void	FragTrap::highFivesGuys( void )
{
	msgHighFiveGuys( "FragTrap" );
}

void	FragTrap::status( void )
{
	msgStatus( "FragTrap" );
}