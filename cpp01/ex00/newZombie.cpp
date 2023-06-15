#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* Ignat = new Zombie(name);
	return (Ignat);
}