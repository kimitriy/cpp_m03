#include "ClapTrap.hpp"

int		main()
{
	ClapTrap a;
	a.attack("Jack");
	a.takeDamage(5);
	a.beRepaired(5);
	a.setName("Mini");
	a.attack("Jack");
	a.takeDamage(5);
	a.beRepaired(5);

	ClapTrap b("one");
	b.attack("Robin");
	b.takeDamage(10);
	b.beRepaired(10);

	ClapTrap c(b);
	c.status();
	c.attack("Derek");
	c.takeDamage(10);
	c.status();
	c.beRepaired(10);

	return ( 0 );
}