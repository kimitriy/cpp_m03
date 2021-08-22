#include "ClapTrap.hpp"

//default constructor
ClapTrap::ClapTrap( void )
	: m_name("no name"), m_hitpoints(0), m_energyPoints(0), m_attackDamage(0)
{
	std::cout << F_R_CYAN << "Default constructor started. ClapTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
ClapTrap::ClapTrap( std::string name, int hp, int ep, int ad )
	: m_name( name ), m_hitpoints( hp ), m_energyPoints( ep ), m_attackDamage( ad )
{
	std::cout << F_R_CYAN << "Parametric constructor started. ClapTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//copy constructor
ClapTrap::ClapTrap( const ClapTrap& other )
{
	*this = other;
	std::cout << F_R_CYAN << "Copy constructor started. ClapTrap " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//destructor
ClapTrap::~ClapTrap( void )
{
	std::cout << F_R_YLLW << "Destructor started. ClapTrap " << F_R_PRPL << getName() << F_R_YLLW << " destructed." << RESET << std::endl;
}

//[=] operator overload
ClapTrap& ClapTrap::operator= ( const ClapTrap& other )
{
	if (this == &other)
		return ( *this );
	this->m_name = other.m_name;
	this->m_hitpoints = other.m_hitpoints;
	this->m_energyPoints = other.m_energyPoints;
	this->m_attackDamage = other.m_attackDamage;

	return ( *this );
}

//setter

void	ClapTrap::setName( std::string name )
{
	m_name = name;
}

void	ClapTrap::setHitPoints( int hp )
{
	m_hitpoints = hp;
}

void	ClapTrap::setEnergyPoints( int ep )
{
	m_energyPoints = ep;
}

void	ClapTrap::setAttackDamage( int ad )
{
	m_attackDamage = ad;
}

//getter
std::string	ClapTrap::getName( void ) const
{
	return ( m_name );
}

int		ClapTrap::getHitPoints( void ) const
{
	return ( m_hitpoints );
}

int		ClapTrap::getEnergyPoints( void ) const
{
	return ( m_energyPoints );
}

int		ClapTrap::getAttackDamage( void ) const
{
	return ( m_attackDamage );
}

//m-methods
void	ClapTrap::status( void )
{
	std::cout << F_R_GRN << "ClapTrap " << F_R_PRPL << getName() << F_R_GRN << " can inflict " << F_R_PRPL << getHitPoints() << F_R_GRN << " points of damage. ";
	std::cout << "Its current quantity of energy points is " << F_R_PRPL << getEnergyPoints() << F_R_GRN << ". ";
	std::cout << "Its current total level of damage is " << F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
}

void	ClapTrap::attack( std::string const& target )
{
	std::cout << F_R_GRN << "ClapTrap " << F_R_PRPL << getName() << F_R_GRN << " attack " << F_R_PRPL << target << F_R_GRN << ", causing " << F_R_PRPL << getHitPoints() << F_R_GRN << " points of damage!" << RESET << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	setAttackDamage( getAttackDamage() + amount );
	std::cout << F_R_GRN << "ClapTrap " << F_R_PRPL << getName() << F_R_GRN << " got " << F_R_PRPL << amount << F_R_GRN << " points of damage. ";
	std::cout << "Current total level of damage is " << F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if ( getEnergyPoints() - amount < 0 )
		std::cout << F_R_RED << "Repairing of ClapTrap " << F_R_PRPL << getName() << F_R_GRN << " is impossible due to lack of energy points." << RESET << std::endl;
	else
	{
		setEnergyPoints( getEnergyPoints() - amount );
		setAttackDamage( getAttackDamage() - amount );
		std::cout << F_R_GRN << "ClapTrap " << F_R_PRPL << getName() << F_R_GRN << " has been repaired. Spent " << F_R_PRPL << amount << F_R_GRN << " energy points. ";
		std::cout << "Current quantity of energy points is " << F_R_PRPL << getEnergyPoints() << F_R_GRN << ". ";
		std::cout << "Current total level of damage is "<< F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
	}
}