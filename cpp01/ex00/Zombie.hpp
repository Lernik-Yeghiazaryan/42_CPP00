#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
private:
	std::string name;

public:
	void announce( void );
	
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

	Zombie(std::string name);
	Zombie();
	
	~Zombie();
};

#endif