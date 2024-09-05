#include "iostream"

int	main(int ac, char **av)
{
	size_t idx = 0;
	if (ac > 1)
	{	
		while (av[++idx])
		{
			for (size_t i = 0; i < strlen(av[idx]); i++)
			{
				std::cout << (char)std::toupper(av[idx][i]);
			}
		}
		std::cout << std::endl;
	}
	else if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
