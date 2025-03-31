#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("John");

	clapTrap.attack("People");

	clapTrap.takeDamage(5);

	clapTrap.beRepaired(3);

	clapTrap.takeDamage(10);
	clapTrap.attack("Others");
	clapTrap.beRepaired(5);

	// Another test
	ClapTrap otherClapTrap("Harry");
	otherClapTrap.attack("Army");
	otherClapTrap.beRepaired(2);
	otherClapTrap.takeDamage(25);
	otherClapTrap.attack("Fans");
	otherClapTrap.beRepaired(5);
	otherClapTrap.takeDamage(10);
	
	return 0;
}