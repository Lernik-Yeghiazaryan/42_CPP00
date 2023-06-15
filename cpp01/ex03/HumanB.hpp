#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
private:
	std::string name;
	Weapon* weaponB;
public:
	void setWeapon(Weapon& wep);
	void attack();
	HumanB(std::string name);
};

#endif