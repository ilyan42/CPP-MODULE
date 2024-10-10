NAME = Materia

SRC =		src/AMateria.cpp \
			src/Character.cpp \
			src/Cure.cpp \
			src/Ice.cpp \
			src/MateriaSource.cpp \
			src/main.cpp \

INCLUDES =	include/AMateria.hpp \
			include/Character.hpp \
			include/Cure.hpp \
			include/Ice.hpp \
			include/MateriaSource.hpp \
			include/IMateriaSource.hpp \
			include/ICharacter.hpp \

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
