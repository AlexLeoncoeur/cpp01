#include "../include/classes/Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = newZombie("pipo");

	zombie->announce();
	delete zombie;
	randomChump("evilAfm");
	return (0);
}