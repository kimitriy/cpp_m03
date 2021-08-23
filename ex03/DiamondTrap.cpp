# include "DiamondTrap.hpp"

//default constructor
DiamondTrap::DiamondTrap( void )
	: ScavTrap(), FragTrap()
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Default constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
DiamondTrap::DiamondTrap( std::string name )
	: ScavTrap( name + "_clap_name" ), FragTrap( name + "_clap_name" )
{
	this->m_name = name;
	this->setHitPoints( FragTrap::getHitPoints() );
	this->setEnergyPoints( ScavTrap::getEnergyPoints() );
	this->setAttackDamage( FragTrap::getAttackDamage() );
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Parametric constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//copy constructor
DiamondTrap::DiamondTrap( const DiamondTrap& other )
{
	*this = other;
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Copy constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//destructor
DiamondTrap::~DiamondTrap( void )
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_YLLW << "Destructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_YLLW << " destructed." << RESET << std::endl;
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
// void		attack( std::string const& target )
// {
// 	ScavTrap::attack( target );
// }

// void		guardGate( void )
// {

// }

// void		highFivesGuys( void )
// {

// }

// void	DiamondTrap::whoAmI( void )
// {

// }
