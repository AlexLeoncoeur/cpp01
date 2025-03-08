#include "../include/classes/Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(6, "pipo");

	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	horde[3].announce();
	horde[4].announce();
	horde[5].announce();
	delete[] horde;
	return (0);
}