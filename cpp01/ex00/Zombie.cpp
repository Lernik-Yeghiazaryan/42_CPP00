#include "Zombie.hpp"

void Zombie::announce( void ) {	std::cout << name << ": BraiiiiiiinnnzzzZ...\n"; }

Zombie::Zombie() { name = ""; }

Zombie::Zombie(std::string name) { this->name = name; }

Zombie::~Zombie() { std::cout << "Zombie \"" << name << "\" is destroyed💀" << std::endl; }