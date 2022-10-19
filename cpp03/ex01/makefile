CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

NAME = ScavTrap
SOURCES = main.cpp ClapTrap.cpp ScavTrap.cpp
HEADERS = ClapTrap.hpp ScavTrap.hpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CC) -c $(CFLAG) $<

clean:
	 rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
