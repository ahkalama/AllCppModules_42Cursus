#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define CYAN		"\033[0;36m"
# define END		"\033[m"

class Zombie
{
	private:
		std::string	name;

	public:
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie* zombieHorde(int a, std::string name);
#endif