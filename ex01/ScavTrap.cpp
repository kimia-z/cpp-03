#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source)
{
	*this = source;
	std::cout << "ScavTrap " << _name << " Copied!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " is destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &source)
{
	std::cout << "ScavTrap " << _name << " is assigned!" << std::endl;
	if (this != &source)
		ClapTrap::operator=(source);
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}