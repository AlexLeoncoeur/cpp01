#include "../include/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;
	std::string	parameter;

	if (argc < 2)
		return (1);
	parameter = argv[1];
	harl.complain(parameter);
	return (0);
}