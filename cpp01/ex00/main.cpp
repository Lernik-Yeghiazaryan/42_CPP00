#include <iostream>
#include "Zombie.hpp"
Zombie* newZombie( std::string name );

int main(void)
{
	//1
	Zombie myZombie0("Garaga");
	myZombie0.announce();

	//2
	Zombie* myZombie1 = newZombie("Boraj");
	myZombie1->announce();

	//3
	// randomChump("Esiminch");
}