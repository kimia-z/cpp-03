#include "FragTrap.hpp"

void testBasicFunctionality()
{
	std::cout << "\n===== BASIC FUNCTIONALITY TEST =====\n";
	FragTrap frag("Lili");

	frag.attack("Ana");
	frag.takeDamage(15);
	frag.beRepaired(5);
	frag.highFivesGuys();
}

void testConstructionChain()
{
	std::cout << "\n===== CONSTRUCTION/DESTRUCTION TEST =====\n";
	FragTrap frag("ConstructorTest");
}

void testEdgeCases()
{
	std::cout << "\n===== EDGE CASE TEST =====\n";
	FragTrap frag("Adam");

	for (int i = 0; i < 101; i++) {
		frag.attack("Mark");
	}

	frag.takeDamage(80);
	frag.attack("Another");
	frag.beRepaired(10);
	frag.highFivesGuys();
}

void testCopyOperations()
{
	std::cout << "\n===== COPY OPERATIONS TEST =====\n";

	FragTrap original("Original");
	original.attack("Someone");

	FragTrap copy(original); 
	copy.attack("CopyTarget");

	FragTrap assigned("Temp");
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