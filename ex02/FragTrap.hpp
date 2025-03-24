#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &source);
	~FragTrap();
	FragTrap &operator=(const FragTrap &source);

	void highFivesGuys(void);
};

#endif