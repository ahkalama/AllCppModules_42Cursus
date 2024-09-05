NAME	= megaphone

SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)

RM		= rm -rf
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

all 	: $(NAME)

clean	:
		$(RM) $(OBJ)

fclean	: clean
		$(RM) $(NAME)

re		: fclean all

$(NAME) :
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)