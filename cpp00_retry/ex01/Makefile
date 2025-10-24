NAME = phonebook

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -MMD -MP

SRC = Contact.cpp\
	main.cpp\
	Phonebook.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) -o $@ $^
	@echo "Compile reussi"

%.o:%.cpp
	@$(CXX) $(CXXFLAGS) -o $@ -c $<
	@echo "Compile"
	
-include $(DEP)

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY: all clean fclean re 
