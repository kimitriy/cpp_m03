#include "DiamondTrap.hpp"

int		main()
{
	DiamondTrap incognito;
	DiamondTrap bob;
	bob = DiamondTrap( "Bob" );
	incognito = bob;


	FragTrap joe( "Joe" );
	FragTrap joes_bro( joe );


	incognito.status();
	joe.status();
	joes_bro.status();
	bob.status();

	// joe.attack( bob.getName() );
	// bob.takeDamage( joe.getHitPoints() );
	// joes_bro.attack ( bob.getName() );
	// bob.takeDamage( joe.getHitPoints() );
	// bob.beRepaired( 2 );
	
	// incognito.status();
	// bob.status();

	// bob.guardGate();

	// ClapTrap joe( "Joe" );
	// joe.attack( "Bob" );

	// ScavTrap bob( "Bob" );
	// bob.attack( joe.getName() );
	// joe.whoAmI();
	// joe.guardGate();
	// joe.highFivesGuys();

	return ( 0 );
}