NAME = Phonebook

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC = main.cpp\
	phonebook.cpp\
	contact.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) -o $(NAME) $(OBJ)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
