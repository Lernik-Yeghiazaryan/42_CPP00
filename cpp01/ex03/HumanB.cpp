#include "HumanB.hpp"

void HumanB::attack()
{	std::cout << name << " attacks with their " << weaponB->getType() << std::endl;	}

void HumanB::setWeapon(Weapon& wep)
{
	weaponB = &wep;
}

HumanB::HumanB(std::string name)
{	this->name = name;	}