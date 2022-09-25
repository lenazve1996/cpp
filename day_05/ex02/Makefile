NAME		= bureaucrat
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
SRC			= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp
OBJ			= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp
		$(CC) $(FLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)
		rm -f *_shrubbery

re : fclean all

.PHONY: all clean fclean re