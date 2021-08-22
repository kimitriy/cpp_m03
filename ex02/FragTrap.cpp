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
//overrided
void	FragTrap::status( void )
{
	std::cout << F_R_GRN << "FragTrap " << F_R_PRPL << getName() << F_R_GRN << " can inflict " << F_R_PRPL << getHitPoints() << F_R_GRN << " points of damage. ";
	std::cout << "Its current quantity of energy points is " << F_R_PRPL << getEnergyPoints() << F_R_GRN << ". ";
	std::cout << "Its current total level of damage is " << F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
}

void	FragTrap::attack( std::string const& target )
{
	std::cout << F_R_GRN << "FragTrap " << F_R_PRPL << getName() << F_R_GRN << " attack " << F_R_PRPL << target << F_R_GRN << ", causing " << F_R_PRPL << getHitPoints() << F_R_GRN << " points of damage!" << RESET << std::endl;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	setAttackDamage( getAttackDamage() + amount );
	std::cout << F_R_GRN << "FragTrap " << F_R_PRPL << getName() << F_R_GRN << " got " << F_R_PRPL << amount << F_R_GRN << " points of damage. ";
	std::cout << "Current total level of damage is " << F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	if ( getEnergyPoints() - amount < 0 )
		std::cout << F_R_RED << "Repairing of FragTrap " << F_R_PRPL << getName() << F_R_GRN << " is impossible due to lack of energy points." << RESET << std::endl;
	else
	{
		setEnergyPoints( getEnergyPoints() - amount );
		setAttackDamage( getAttackDamage() - amount );
		std::cout << F_R_GRN << "FragTrap " << F_R_PRPL << getName() << F_R_GRN << " has been repaired. Spent " << F_R_PRPL << amount << F_R_GRN << " energy points. ";
		std::cout << "Current quantity of energy points is " << F_R_PRPL << getEnergyPoints() << F_R_GRN << ". ";
		std::cout << "Current total level of damage is "<< F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
	}
}

//new
void	FragTrap::highFivesGuys( void )
{
	std::cout << F_R_GRN << "FragTrap " << F_R_PRPL << getName() << F_R_GRN << " is requesting for high five to him." << RESET << std::endl;
}