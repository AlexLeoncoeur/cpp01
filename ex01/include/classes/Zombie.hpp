#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{

private:

	std::string	name;

public:

	Zombie(std::string name);
	Zombie();
	~Zombie();

	void	putName(std::string name);
	void	announce(void);

};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);
void	randomChump(std::string name);

#endif