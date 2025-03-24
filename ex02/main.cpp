#include "FragTrap.hpp"

int main()
{
	FragTrap fragTrap("Mikky");

	fragTrap.attack("Morry");
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(15);
	fragTrap.highFivesGuys();

	return 0;
}