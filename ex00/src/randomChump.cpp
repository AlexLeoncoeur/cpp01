#include "../include/classes/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	chump = Zombie(name);
	
	chump.announce();
}