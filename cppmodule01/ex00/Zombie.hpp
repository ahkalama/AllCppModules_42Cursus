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
		Zombie(std::string name);
		~Zombie();
		void	announce( void );
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif