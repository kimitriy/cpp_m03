#include "DiamondTrap.hpp"

int		main()
{
	DiamondTrap incognito;
	DiamondTrap joe( "Joe" );
	DiamondTrap joes_bro( joe );
	DiamondTrap bob;

	bob = DiamondTrap( "Bob" );
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