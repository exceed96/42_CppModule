CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

NAME = Animal
SOURCES = Animal.cpp Cat.cpp Dog.cpp main.cpp
HEADERS = Animal.hpp Cat.hpp Dog.hpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $(CFLAG) $<

clean:
	 rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
