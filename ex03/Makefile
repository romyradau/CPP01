NAME = human

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FLAGS += -g

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp



all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all