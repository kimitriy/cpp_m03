#include "ScavTrap.hpp"

int		main()
{
	ScavTrap incognito;
	ScavTrap joe( "Joe" );
	ScavTrap joes_bro( joe );
	ScavTrap bob;

	bob = ScavTrap( "Bob" );
	incognito = bob;

	incognito.status();
	joe.status();
	joes_bro.status();
	bob.status();

	joe.attack( bob.getName() );
	bob.takeDamage( joe.getHitPoints() );
	joes_bro.attack ( bob.getName() );
	bob.takeDamage( joe.getHitPoints() );
	bob.beRepaired( 2 );
	
	incognito.status();
	bob.status();

	bob.guardGate();

	return ( 0 );
}