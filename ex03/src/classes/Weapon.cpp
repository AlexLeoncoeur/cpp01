#include "../../include/Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	this->noWeapon = "*unknown weapon*";
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType()
{
	if (this->type.empty())
		return (noWeapon);
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
