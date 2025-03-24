#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &source) : ClapTrap(source)
{
	*this = source;
	std::cout << "FragTrap " << _name << " Copied!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " is destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &source)
{
	std::cout << "FragTrap " << _name << " is assigned!" << std::endl;
	if (this != &source)
		ClapTrap::operator=(source);
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " did a positive high five! ✋" << std::endl;
}