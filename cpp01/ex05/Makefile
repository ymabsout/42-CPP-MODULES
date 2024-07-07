CC = c++
CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = Harl.hpp
NAME = Harl

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

PHONY : clean