#include "FragTrap.hpp"

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
void	FragTrap::highFivesGuys( void )
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_GRN << ++className << " " << F_R_PRPL << getName() << F_R_GRN << " is requesting for high five to him." << RESET << std::endl;
}