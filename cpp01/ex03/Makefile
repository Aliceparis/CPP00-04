NAME = Unnecessary_violence

CPP = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

SRC = main.cpp\
	Weapon.cpp\
	HumanA.cpp\
	HumanB.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re