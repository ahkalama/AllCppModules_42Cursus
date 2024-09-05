#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << RED << this->name << END << " has been destroyed." << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << CYAN << this->name << END << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
