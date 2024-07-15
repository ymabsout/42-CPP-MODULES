CC = c++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp PmergeMe.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = PmergeMe

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp PmergeMe.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all 

PHONY : clean