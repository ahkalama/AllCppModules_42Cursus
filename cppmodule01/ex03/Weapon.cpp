#include "Weapon.hpp"


Weapon::~Weapon( void )
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon address: " << &type << std::endl;
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}