#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_name("DEFAULT"), _hitPoint(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Defualt constructor called!" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is born!" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &source) : _name(source._name), _hitPoint(source._hitPoint)
			, _energyPoints(source._energyPoints), _attackDamage(source._attackDamage)
{
	std::cout << "ClapTrap " << _name << " Copied!" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &source)
{
	if (this != &source)
	{
		this->_hitPoint = source._hitPoint;
		this->_attackDamage = source._attackDamage;
		this->_energyPoints = source._energyPoints;
	}
	std::cout << "ClapTrap " << _name << " is assigned!" << std::endl;
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
		 std::cout << _name
		 << " is already out of hit points!" << std::endl;
		return;
	}
	else if (amount >= this->_hitPoint)
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	std::cout << this->_name << " take "
			<< amount << " damages, total of its hit point is "
			<< this->_hitPoint << "!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		this->_energyPoints--;
		this->_hitPoint += amount;
		std::cout << this->_name << " repaired "
			<< amount << " points, total of its hit point is "
			<< this->_hitPoint << "!" << std::endl;
		return;
	}
	std::cout << this->_name
	<< " is out of hit points or energy points and can't repaired!" << std::endl;
}