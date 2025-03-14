#include "ClapTrap.hpp"

int main() {
	// Create a ClapTrap object
	ClapTrap clapTrap("John");

	// Test attack function
	clapTrap.attack("Enemy");

	// Test takeDamage function
	clapTrap.takeDamage(5);

	// Test beRepaired function
	clapTrap.beRepaired(3);

	// Test edge cases
	clapTrap.takeDamage(10); // Should reduce hit points to 0
	clapTrap.attack("Enemy"); // Should fail (no hit points left)
	clapTrap.beRepaired(5); // Should fail (no hit points left)

	return 0;
}