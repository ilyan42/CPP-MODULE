NAME = Bureaucrat

SRC =		srcs/main.cpp \
			srcs/Bureaucrat.cpp \
			srcs/Form.cpp \
			srcs/PresidentialPardonForm.cpp \
			srcs/RobotomyRequestForm.cpp \
			srcs/ShrubberyCreationForm.cpp \


INCLUDES =	include/Bureaucrat.hpp \
			include/Form.hpp \
			include/PresidentialPardonForm.hpp \
			include/ShrubberyCreationForm.hpp \
			include/RobotomyRequestForm.hpp \


OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

all: $(NAME)

$(NAME): $(OBJ) Makefile
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME) -I ./include

%.o: %.cpp $(INCLUDES)
	$(CC) $(CPPFLAGS) -c $< -o $@ -I ./include

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
