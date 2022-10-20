CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

NAME = Bureaucrat
SOURCES = Bureaucrat.cpp main.cpp
HEADERS = Bureaucrat.hpp
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
