NAME = Animal

SRC =		srcs/main.cpp \
			srcs/Animal.cpp \
			srcs/Cat.cpp \
			srcs/Dog.cpp \
			srcs/WrongAnimal.cpp \
			srcs/WrongCat.cpp \
			srcs/Brain.cpp \

INCLUDES =	include/Animal.hpp \
			include/Cat.hpp \
			include/Dog.hpp \
			include/WrongAnimal.hpp \
			include/WrongCat.hpp \
			include/Brain.hpp \

OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g3


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES) Makefile
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME) -I ./include

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
