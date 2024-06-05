CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = header.hpp
NAME = Zombie

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c  $< -o $@

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

PHONY:clean