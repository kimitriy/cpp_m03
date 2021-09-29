#include "ClapTrap.hpp"

//private
void	ClapTrap::msgStatus( std::string className )
{
	std::cout << F_R_GRN << className << " " << F_R_PRPL << getName() << F_R_GRN << " can inflict " << F_R_PRPL << getHitPoints() << F_R_GRN << " points of damage. ";
	std::cout << "Its current quantity of energy points is " << F_R_PRPL << getEnergyPoints() << F_R_GRN << ". ";
	std::cout << "Its current total level of damage is " << F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
}

void	ClapTrap::msgAttack( std::string className, std::string target )
{
	std::cout << F_R_GRN << className << " " << F_R_PRPL << getName() << F_R_GRN << " attack " << F_R_PRPL << target << F_R_GRN << ", causing ";
	std::cout << F_R_PRPL << m_hitpoints << F_R_GRN << " points of damage!" << RESET << std::endl;
}

void	ClapTrap::msgTakeDamage( std::string className, unsigned int amount )
{
	std::cout << F_R_GRN << className << " " << F_R_PRPL << getName() << F_R_GRN << " got " << F_R_PRPL << amount << F_R_GRN << " points of damage. ";
	std::cout << "Current total level of damage is " << F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
}

void	ClapTrap::msgBeRepairedN( std::string className )
{
	std::cout << F_R_RED << "Repairing of " << className << " " << F_R_PRPL << getName() << F_R_RED << " is impossible due to lack of energy points." << RESET << std::endl;
}

void	ClapTrap::msgBeRepairedY( std::string className, unsigned int amount )
{
	std::cout << F_R_GRN << className << " " << F_R_PRPL << getName() << F_R_GRN << " has been repaired. Spent " << F_R_PRPL << amount << F_R_GRN << " energy points. ";
	std::cout << "Current quantity of energy points is " << F_R_PRPL << getEnergyPoints() << F_R_GRN << ". ";
	std::cout << "Current total level of damage is "<< F_R_PRPL << getAttackDamage() << F_R_GRN << "." << RESET << std::endl;
}

//public
//default constructor
ClapTrap::ClapTrap( void )
	: m_name("no name"), m_hitpoints(10), m_energyPoints(10), m_attackDamage(0)
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Default constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
ClapTrap::ClapTrap( std::string name )
	: m_name( name ), m_hitpoints( 10 ), m_energyPoints( 10 ), m_attackDamage( 0 )
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Parametric constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

// ClapTrap::ClapTrap( std::string name, int hp, int ep, int ad )
// 	: m_name( name ), m_hitpoints( hp ), m_energyPoints( ep ), m_attackDamage( ad )
// {
// 	const char	*className = typeid(*this).name();
// 	std::cout << F_R_CYAN << "Parametric constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
// }

//copy constructor
ClapTrap::ClapTrap( const ClapTrap& other )
{
	*this = other;
	const char	*className = typeid(*this).name();
	std::cout << F_R_CYAN << "Copy constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//destructor
ClapTrap::~ClapTrap( void )
{
	const char	*className = typeid(*this).name();
	std::cout << F_R_YLLW << "Destructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_YLLW << " destructed." << RESET << std::endl;
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
void	ClapTrap::attack( std::string const& target )
{
	msgAttack( "ClapTrap", target );
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	setAttackDamage( getAttackDamage() + amount );
	msgTakeDamage( "ClapTrap", getAttackDamage() );
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if ( this->getEnergyPoints() - static_cast<int>( amount ) < 0 )
		msgBeRepairedN( "ClapTrap" );
	else
	{
		this->setEnergyPoints( this->getEnergyPoints() - amount );
		this->setAttackDamage( this->getAttackDamage() - amount );
		msgBeRepairedY( "ClapTrap", amount );
	}
}

void	ClapTrap::status( void )
{
	msgStatus( "ClapTrap" );
}