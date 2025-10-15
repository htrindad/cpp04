NAME = main
SRC = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongDog.cpp WrongCat.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -O3 -std=c++98

%.o: %.cpp
	c++ $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

clear:
	@clear
	@make re
