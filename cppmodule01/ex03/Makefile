NAME		= weapon

CC			= c++
FLAGS		= -Wall -Werror -Wextra -std=c++98

INCLUDES	= HumanA.hpp HumanB.hpp Weapon.hpp
SOURCES		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJECTS		= $(SOURCES:.cpp=.o)

.PHONY: all clean fclean re

all:
	@$(MAKE) $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
	@echo "[FINISH]\n"

clean: 
	@rm -rf *.o
	@echo "\033[0;33mclean"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[0;32mfclean"

re: fclean all
