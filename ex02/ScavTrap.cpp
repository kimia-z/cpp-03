#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Default constractor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source)
{
	std::cout << "ScavTrap " << _name << " Copied!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " is destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &source)
{
	if (this != &source)
		ClapTrap::operator=(source);
	std::cout << "ScavTrap " << _name << " is assigned!" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks "
				<< target << ", causing " << this->_attackDamage
				<< " points of damage!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name
	<< " is out of hit points/energy points and can't attack!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		std::cout << "ScavTrap " << _name << " is now in the Gate keeper mode!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name
	<< " is out of hit points/energy points and can't keep the Gate!" << std::endl;
}