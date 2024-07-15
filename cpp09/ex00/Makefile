CC = c++
CFLAGS = -Wall -Wextra -Werror 
SRCS = main.cpp BitcoinExchange.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = btc

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)	

%.o: %.cpp BitcoinExchange.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all

PHONY : clean