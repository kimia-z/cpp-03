#include "ScavTrap.hpp"

void testBasicFunctionality()
{
	std::cout << "\n===== BASIC FUNCTIONALITY TEST =====\n";
	ScavTrap scav("Lili");

	scav.attack("Ana");
	scav.takeDamage(15);
	scav.beRepaired(5);
	scav.guardGate();
}

void testConstructionChain()
{
	std::cout << "\n===== CONSTRUCTION/DESTRUCTION TEST =====\n";
	ScavTrap scav("ConstructorTest");
}

void testEdgeCases()
{
	std::cout << "\n===== EDGE CASE TEST =====\n";
	ScavTrap scav("Adam");

	for (int i = 0; i < 52; i++) {
		scav.attack("Mark");
	}

	scav.takeDamage(80);
	scav.attack("Another");
	scav.beRepaired(10);
}

void testCopyOperations()
{
	std::cout << "\n===== COPY OPERATIONS TEST =====\n";

	ScavTrap original("Original");
	original.attack("Someone");

	ScavTrap copy(original); 
	copy.attack("CopyTarget");

	ScavTrap assigned("Temp");
	assigned = original;
	assigned.attack("Assigned one");
}

int main()
{
	testBasicFunctionality();
	testConstructionChain();
	testEdgeCases();
	testCopyOperations();

	std::cout << "\n===== END OF TESTS =====\n";
	return 0;
}