#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string _name;

	unsigned int _hitPoint = 10; // health of CrapTrap
	unsigned int _energyPoints = 10;
	unsigned int _attackDamage = 0;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &source);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &source);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};



#endif