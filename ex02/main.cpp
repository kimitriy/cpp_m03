#include "FragTrap.hpp"

int		main()
{
	FragTrap incognito;
	FragTrap joe( "Joe" );
	FragTrap joes_bro( joe );
	FragTrap bob;

	bob = FragTrap( "Bob" );
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

	bob.highFivesGuys();

	return ( 0 );
}