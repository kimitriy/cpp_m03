#include "DiamondTrap.hpp"

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


	// ScavTrap d;
	// d.attack("Lulu");
	// d.takeDamage(5);
	// d.beRepaired(5);
	
	// ScavTrap e("Lilu");
	// e.attack("Jack");
	// e.takeDamage(5);
	// e.beRepaired(5);
	// e.setName("lalala");
	// e.guardGate();
	
	// ScavTrap f(e);
	// f.setName("minimini");
	// f.attack("Jack");
	// f.takeDamage(15);
	// f.beRepaired(45);
	// f.guardGate();


	// FragTrap g;
	// g.attack("Miu");
	// g.takeDamage(5);
	// g.beRepaired(5);
	// g.highFivesGuys();
	
	// FragTrap h("Mau");
	// h.attack("Jack");
	// h.takeDamage(5);
	// h.beRepaired(5);
	// h.setName("lalala");
	// h.highFivesGuys();
	
	// FragTrap i(h);
	// i.setName("Minimiu");
	// i.attack("Jack");
	// i.takeDamage(15);
	// i.beRepaired(45);
	// i.highFivesGuys();

	// FragTrap *z = new FragTrap("new_lala");
	// z->attack("Jack");
	// z->takeDamage(15);
	// z->beRepaired(45);
	// z->highFivesGuys();
	// delete z;

	std::cout << "g" << std::endl;
	DiamondTrap g;
	g.takeDamage(5);
	g.attack("Jack");
	g.beRepaired(5);
	g.highFivesGuys();
	g.whoAmI();

	std::cout << "l" << std::endl;
	DiamondTrap l("Black");
	l.attack("Jack");
	l.takeDamage(5);
	l.beRepaired(5);
	l.highFivesGuys();
	l.whoAmI();

	std::cout << "m" << std::endl;
	DiamondTrap m(l);
	m.attack("Jack");
	m.takeDamage(15);
	m.beRepaired(45);
	m.highFivesGuys();
	m.whoAmI();

	std::cout << "z" << std::endl;
	DiamondTrap *z = new DiamondTrap("new_lala");
	z->attack("Jack");
	z->takeDamage(15);
	z->beRepaired(45);
	z->highFivesGuys();
	z->whoAmI();
	z->status();
	delete z;

	return ( 0 );
}