CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS = phonebook.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = header.hpp
NAME = phonebook

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -fsanitize=address -g  $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) -fsanitize=address -g  $(CFLAGS) $< -o $@

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

PHONY:clean