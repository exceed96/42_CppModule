CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

NAME = result
SOURCES = tests.cpp Account.cpp
HEADERS = Account.cpp
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
