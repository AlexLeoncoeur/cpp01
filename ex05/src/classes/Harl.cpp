#include "../../include/Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	std::string	errors[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*pointerToMember[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (level.compare(errors[i]))
			(this->*pointerToMember[i])();
}