#include "ScavTrap.hpp"

//default constructor
ScavTrap::ScavTrap( void )
	: ClapTrap()
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Default constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
ScavTrap::ScavTrap( std::string name )
	: ClapTrap( name, 100, 50, 20 )
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Parametric constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
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

//[=] operator overload
ScavTrap& ScavTrap::operator= ( const ScavTrap& other )
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
void	ScavTrap::guardGate( void )
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_GRN << ++className << " " << F_R_PRPL << getName() << F_R_GRN << " have entered in Gate keeper mode." << RESET << std::endl;
}