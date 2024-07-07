CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Bureaucrat.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = a.out

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all

PHONY : clean