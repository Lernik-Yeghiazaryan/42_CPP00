#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* hordeOfZombies = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		hordeOfZombies[i].setName(name);
	}
	return hordeOfZombies;
}