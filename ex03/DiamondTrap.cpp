# include "DiamondTrap.hpp"

//default constructor
DiamondTrap::DiamondTrap( void )
	: ClapTrap( "noname_clap_name" ), ScavTrap( 's' ), FragTrap( 's' )
{
	const char	*className = typeid(*this).name();
	++className;
	std::cout << F_R_CYAN << "Default constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//param constructor
DiamondTrap::DiamondTrap( std::string name )
	: ClapTrap( name + "_clap_name" ), ScavTrap( 's' ), FragTrap( 's' ), m_name( name )
{
	const char	*className = typeid(*this).name();
	++className;
	std::cout << F_R_CYAN << "Parametric constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//copy constructor
DiamondTrap::DiamondTrap( const DiamondTrap& other )
{
	*this = other;
	
	const char	*className = typeid(*this).name();
	++className;
	std::cout << F_R_CYAN << "Copy constructor started. " << ++className << " " << F_R_PRPL << getName() << F_R_CYAN << " constructed." << RESET << std::endl;
}

//destructor
DiamondTrap::~DiamondTrap( void )
{
	const char	*className = typeid(*this).name();
	
	++className;
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
void	DiamondTrap::attack( std::string const& target )
{
	ScavTrap::attack( target );
}

void	DiamondTrap::takeDamage( unsigned int amount )
{
	setAttackDamage( getAttackDamage() + amount );
	msgTakeDamage( "DiamondTrap", getAttackDamage() );
}

void	DiamondTrap::beRepaired( unsigned int amount )
{
	if ( getEnergyPoints() - amount < 0 )
		msgBeRepairedN( "DiamondTrap" );
	else
	{
		setEnergyPoints( getEnergyPoints() - amount );
		setAttackDamage( getAttackDamage() - amount );
		msgBeRepairedY( "DiamondTrap", amount );
	}
}

void	DiamondTrap::guardGate( void )
{
	msgGuardGate( "DiamondTrap" );
}

void	DiamondTrap::highFivesGuys( void )
{
	msgHighFiveGuys( "DiamondTrap" );
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << F_R_GRN << "I am DiamondTrap, and I have two names. My DiamondTrap name is " << F_R_PRPL << m_name << F_R_GRN << ", and my ClapTrap name is " << F_R_PRPL << getName() << F_R_GRN << "." << RESET << std::endl;
}

void	DiamondTrap::status( void )
{
	msgStatus( "DiamondTrap" );
}