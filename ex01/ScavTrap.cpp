#include "ScavTrap.hpp"

//default constructor
ScavTrap::ScavTrap( void )
	: ClapTrap()
{
	std::cout << F_R_CYAN << "Default constructor started. ScavTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
ScavTrap::ScavTrap( std::string name )
	: ClapTrap( name, 100, 50, 20 )
{
	std::cout << F_R_CYAN << "Parametric constructor started. ScavTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//copy constructor
ScavTrap::ScavTrap( const ScavTrap& other )
{
	*this = other;
	std::cout << F_R_CYAN << "Copy constructor started. ScavTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//destructor
ScavTrap::~ScavTrap( void )
{
	std::cout << F_R_YLLW << "Destructor started. ScavTrap " << F_R_PRPL << getName() << F_R_YLLW << " destructed." << RESET << std::endl;
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
//overrided
void	ScavTrap::status( void )
{
	std::cout << F_R_GRN << "ScavTrap " << F_R_PRPL << getName() << F_R_GRN << " can inflict " << F_R_PRPL << getHitPoints() << F_R_GRN << " points of damage. ";
	std::cout << "Its current quantity of energy points is " << F_R_PRPL << getEnergyPoints() << F_R_GRN << ". ";
	std::cout << "Its current total level of damage is " << F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
}

void	ScavTrap::attack( std::string const& target )
{
	std::cout << F_R_GRN << "ScavTrap " << F_R_PRPL << getName() << F_R_GRN << " attack " << F_R_PRPL << target << F_R_GRN << ", causing " << F_R_PRPL << getHitPoints() << F_R_GRN << " points of damage!" << RESET << std::endl;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	setAttackDamage( getAttackDamage() + amount );
	std::cout << F_R_GRN << "ScavTrap " << F_R_PRPL << getName() << F_R_GRN << " got " << F_R_PRPL << amount << F_R_GRN << " points of damage. ";
	std::cout << "Current total level of damage is " << F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	if ( getEnergyPoints() - amount < 0 )
		std::cout << F_R_RED << "Repairing of ScavTrap " << F_R_PRPL << getName() << F_R_GRN << " is impossible due to lack of energy points." << RESET << std::endl;
	else
	{
		setEnergyPoints( getEnergyPoints() - amount );
		setAttackDamage( getAttackDamage() - amount );
		std::cout << F_R_GRN << "ScavTrap " << F_R_PRPL << getName() << F_R_GRN << " has been repaired. Spent " << F_R_PRPL << amount << F_R_GRN << " energy points. ";
		std::cout << "Current quantity of energy points is " << F_R_PRPL << getEnergyPoints() << F_R_GRN << ". ";
		std::cout << "Current total level of damage is "<< F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
	}
}

//new
void	ScavTrap::guardGate( void )
{
	std::cout << F_R_GRN << "ScavTrap " << F_R_PRPL << getName() << F_R_GRN << " have entered in Gate keeper mode." << RESET << std::endl;
}