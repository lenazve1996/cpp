NAME		= span
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) MutantStack.hpp
		$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re