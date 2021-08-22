# include "DiamondTrap.hpp"

//default constructor
DiamondTrap::DiamondTrap( void )
	: ScavTrap(), FragTrap()
{
	std::cout << F_R_CYAN << "Default constructor started. DiamondTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
DiamondTrap::DiamondTrap( std::string name )
	: ScavTrap( name + "_clap_name" ), FragTrap( name + "_clap_name" )
{
	this->m_name = name;
	this->m_hitpoints = FragTrap::getHitPoints();
	this->m_energyPoints = ScavTrap::getEnergyPoints();
	this->m_attackDamage = FragTrap::getAttackDamage();
	std::cout << F_R_CYAN << "Parametric constructor started. DiamondTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//copy constructor
DiamondTrap::DiamondTrap( const DiamondTrap& other )
{
	*this = other;
	std::cout << F_R_CYAN << "Copy constructor started. DiamondTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//destructor
DiamondTrap::~DiamondTrap( void )
{
	std::cout << F_R_YLLW << "Destructor started. DiamondTrap " << F_R_PRPL << getName() << F_R_YLLW << " destructed." << RESET << std::endl;
}

//[=] operator overload
DiamondTrap& DiamondTrap::operator= ( const DiamondTrap& other )
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
//overrided
