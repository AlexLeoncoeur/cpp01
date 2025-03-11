#include "../../include/Harl.hpp"

void	Harl::debug()
{
	std::cout 	<< "[ DEBUG ]"
				<< std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
				<< std::endl
				<< "I really do!"
				<< std::endl;
}

void	Harl::info()
{
	std::cout	<< "[ INFO ]"
				<< std::endl
				<< "I cannot believe adding extra bacon costs more money."
				<< std::endl
				<< "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
				<< std::endl;

}

void	Harl::warning()
{
	std::cout 	<< "[ WARNING ]"
				<< std::endl
				<< "I think I deserve to have some extra bacon for free."
				<< std::endl
				<< "I've been coming for years, whereas you started working here just last month."
				<< std::endl;
}

void	Harl::error()
{
	std::cout	<< "[ ERROR ]"
				<< std::endl
				<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

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
	{
		if (!level.compare(errors[i]))
		{
			switch (i)
			{
			case 0:
				(this->*pointerToMember[0])();
			case 1:
				(this->*pointerToMember[1])();
			case 2:
				(this->*pointerToMember[2])();
			case 3:
				(this->*pointerToMember[3])();
			default:
				return ;
			}
		}
	}
	std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl, exit(0);
}