#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
private:
	std::string name;

public:
	void	announce( void );
	void	setName(std::string name);

	Zombie( std::string name );
	Zombie();
	~Zombie();
};

Zombie*	zombieHorde( int N, std::string name );

#endif