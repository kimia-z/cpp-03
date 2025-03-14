#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap " << name << " is born!" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &source) : _name(source._name)
{
	std::cout << "ClapTrap " << _name << " Copied!" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &source)
{
	std::cout << "ClapTrap " << _name << " is assigned!" << std::endl;
	if (this != &source)
		this->_name = source._name;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks "
				<< target << ", causing " << this->_attackDamage
				<< " points of damage!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name
	<< " is out of hit points or energy points and can't attack!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint < 1)
	{
		 std::cout << "ClapTrap " << _name
		 << " is already out of hit points!" << std::endl;
		return;
	}
	else if (amount >= this->_hitPoint)
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	std::cout << "ClapTrap " << this->_name << " take "
			<< amount << " damages, total of its hit point is "
			<< this->_hitPoint << "!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		this->_energyPoints--;
		this->_hitPoint += amount;
		std::cout << "ClapTrap " << this->_name << " repaired "
			<< amount << " points, total of its hit point is "
			<< this->_hitPoint << "!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name
	<< " is out of hit points or energy points and can't attack!" << std::endl;
}