#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << name << " attacks with their " << weaponA->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &wep) {
	this->name = name;
	weaponA = &wep;
}