CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Cat.cpp Dog.cpp Animal.cpp main.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = a.out

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

PHONY : clean