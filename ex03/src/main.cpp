#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		club.setType("other type of club");
		jim.attack();
	}
	return 0;
}
