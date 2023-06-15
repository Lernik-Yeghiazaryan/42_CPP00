#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
private:
	std::string name;
	Weapon* weaponA;

public:
	void attack();
	HumanA(std::string name, Weapon &wep);
};

#endif