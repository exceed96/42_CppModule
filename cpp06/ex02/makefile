CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

NAME = Cast
SOURCES = main.cpp A.cpp B.cpp C.cpp Base.cpp Search.cpp 
HEADERS = A.hpp B.hpp C.hpp Base.hpp Search.hpp
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
