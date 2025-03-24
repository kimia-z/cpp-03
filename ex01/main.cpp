#include "ScavTrap.hpp"

int main() {
	// Create a ScavTrap object
	ScavTrap scavTrap("Guardian");

	// Test attack function (inherited from ClapTrap)
	scavTrap.attack("Enemy");

	// Test takeDamage function (inherited from ClapTrap)
	scavTrap.takeDamage(20);

	// Test beRepaired function (inherited from ClapTrap)
	scavTrap.beRepaired(10);

	// Test guardGate function (unique to ScavTrap)
	scavTrap.guardGate();

	return 0;
}