#include "ClapTrap.hpp"

int		main()
{
	ClapTrap incognito;
	ClapTrap joe( "Joe", 2, 10, 0 );
	ClapTrap joes_bro( joe );
	ClapTrap bob;

	bob = ClapTrap( "Bob", 2, 10, 0);
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

	return ( 0 );
}