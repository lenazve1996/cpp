NAME		= convert
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
SRC			= main.cpp int.cpp float.cpp double.cpp utils.cpp
OBJ			= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) convertion.hpp
		$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re