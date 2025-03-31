#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default constractor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &source) : ClapTrap(source)
{
	std::cout << "FragTrap " << _name << " Copied!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " is destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &source)
{
	if (this != &source)
		ClapTrap::operator=(source);
	std::cout << "FragTrap " << _name << " is assigned!" << std::endl;
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks "
				<< target << ", causing " << this->_attackDamage
				<< " points of damage!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name
	<< " is out of hit points/energy points and can't attack!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		std::cout << "FragTrap " << _name << " did a positive high five! ✋" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name
	<< " is out of hit points/energy points and can't give a high five!" << std::endl;
}
