#include "FragTrap.hpp"

//default constructor
FragTrap::FragTrap( void )
	: ClapTrap()
{
	std::cout << F_R_CYAN << "Default constructor started. FragTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
FragTrap::FragTrap( std::string name )
	: ClapTrap( name, 100, 100, 30 )
{
	std::cout << F_R_CYAN << "Parametric constructor started. FragTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//copy constructor
FragTrap::FragTrap( const FragTrap& other )
{
	*this = other;
	std::cout << F_R_CYAN << "Copy constructor started. FragTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//destructor
FragTrap::~FragTrap( void )
{
	std::cout << F_R_YLLW << "Destructor started. FragTrap " << F_R_PRPL << getName() << F_R_YLLW << " destructed." << RESET << std::endl;
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
void	FragTrap::highFivesGuys( void )
{
	std::cout << F_R_GRN << "FragTrap " << F_R_PRPL << getName() << F_R_GRN << " is requesting for high five to him." << RESET << std::endl;
}