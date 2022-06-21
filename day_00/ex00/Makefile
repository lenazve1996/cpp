NAME		= megaphone
CC			= g++
FLAGS		= -Wall -Wextra -Werror -std=c++98
SRC			= megaphone.cpp
OBJ			= $(SRC:.cpp=.o)
D_FILES 	= $(SRC:.cpp=.d)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.c
		$(CC) $(FLAGS) -c $? -o $@ -MD

clean :
		rm -f $(OBJ)
		rm -f $(D_FILES)

fclean : clean
		rm -f $(NAME)
		rm -f libft.a

re : fclean all

.PHONY: all clean fclean re