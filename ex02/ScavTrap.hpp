#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &source);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &source);

	void guardGate();
};

#endif