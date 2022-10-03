NAME		= identify_type
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp Base.hpp A.hpp B.hpp C.hpp
		$(CC) $(FLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re