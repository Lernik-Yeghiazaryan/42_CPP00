#include "Zombie.hpp"

int main()
{
	const size_t size = 9;
	Zombie* hordeOfZombies;
	hordeOfZombies = zombieHorde(size, "GARAGA");
	for (size_t i = 0; i < size; ++i) {
		hordeOfZombies[i].announce();
	}
	delete[] hordeOfZombies;
}