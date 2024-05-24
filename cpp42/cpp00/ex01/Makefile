CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = phonebook.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = header.hpp
NAME = phonebook

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

PHONY:clean