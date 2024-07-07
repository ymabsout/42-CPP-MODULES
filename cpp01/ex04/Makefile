CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Replacer.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = replacer
HEADER = Replacer.hpp

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all