#include "../../include/classes/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": *died*" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::putName(std::string name)
{
	this->name = name;
}