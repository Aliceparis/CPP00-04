NAME = BSP

CPP = c++
CFLAGS = -Wall -Werror -Werror -std=c++98 -g3

SRC = main.cpp\
	Point.cpp\
	Fixed.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re