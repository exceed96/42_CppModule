CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

NAME = phonebook
SOURCES = main.cpp phonebook.cpp phonebook_info.cpp
HEADERS = phonebook.hpp phonebook_info.hpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.cpp $(HEADERWS)
	$(CC) -c $(CFLAG) $<

clean:
	 rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
