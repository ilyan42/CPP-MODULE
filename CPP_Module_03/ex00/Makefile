NAME = ClapTrap

SRC =		srcs/main.cpp \
			srcs/ClapTrap.cpp \

INCLUDES =	include/ClapTrap.hpp \

OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g3


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES) Makefile
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME) -I $(INCLUDES)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
