NAME		= zombie
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
SRC			= newZombie.cpp randomChump.cpp Zombie.cpp
OBJ			= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.c
		$(CC) $(FLAGS) -c $? -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re