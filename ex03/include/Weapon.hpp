#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:

	std::string	type;
	std::string noWeapon;

public:

	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string	&getType();
	void				setType(std::string newType);
};

#endif