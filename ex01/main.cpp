#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavTrap("Guardian");
	
	scavTrap.attack("Enemy");
	scavTrap.takeDamage(20);
	scavTrap.beRepaired(10);
	scavTrap.guardGate();

	return 0;
}