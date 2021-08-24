#include "FragTrap.hpp"

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


	FragTrap g;
	g.attack("Miu");
	g.takeDamage(5);
	g.beRepaired(5);
	g.highFivesGuys();
	
	FragTrap h("Mau");
	h.attack("Jack");
	h.takeDamage(5);
	h.beRepaired(5);
	h.setName("lalala");
	h.highFivesGuys();
	
	FragTrap i(h);
	i.setName("Minimiu");
	i.attack("Jack");
	i.takeDamage(15);
	i.beRepaired(45);
	i.highFivesGuys();

	FragTrap *z = new FragTrap("new_lala");
	z->attack("Jack");
	z->takeDamage(15);
	z->beRepaired(45);
	z->highFivesGuys();
	delete z;

	return ( 0 );
}