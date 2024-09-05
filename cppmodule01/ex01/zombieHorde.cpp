#include "Zombie.hpp"

Zombie*	zombieHorde(int a, std::string name)
{
	Zombie	*arrayZombie = new Zombie[a];

	for (int i = 0; i < a; i++)
		arrayZombie[i].setName(name + std::to_string(i));
	return (arrayZombie);
}