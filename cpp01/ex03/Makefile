CC = c++
CFLAGS = -Wall -Werror -Werror -std=c++98
SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp
NAME = violence

all:$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

PHONY:clean