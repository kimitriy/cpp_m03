#include "ScavTrap.hpp"

int		main()
{
	// ClapTrap a;
	// a.attack("Jack");
	// a.takeDamage(5);
	// a.beRepaired(5);
	// a.setName("Mini");
	// a.attack("Jack");
	// a.takeDamage(5);
	// a.beRepaired(5);

	// ClapTrap b("one");
	// b.attack("Robin");
	// b.takeDamage(10);
	// b.beRepaired(10);

	// ClapTrap c(b);
	// c.attack("Derek");
	// c.takeDamage(10);
	// c.beRepaired(10);


	ScavTrap d;
	d.attack("Someone");
	d.takeDamage(5);
	d.beRepaired(5);
	
	ScavTrap e("Bob");
	e.attack("Jack");
	e.takeDamage(5);
	e.beRepaired(5);
	e.setName("John");
	e.guardGate();
	
	ScavTrap f(e);
	f.setName("Maria");
	f.attack("Jack");
	f.takeDamage(15);
	f.beRepaired(45);
	f.guardGate();

	return ( 0 );
}