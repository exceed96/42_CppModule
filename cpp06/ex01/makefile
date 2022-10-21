CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

NAME = Cast
SOURCES = Serializer.cpp main.cpp
HEADERS = Data.hpp Serializer.hpp
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
