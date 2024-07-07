CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS = Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = a.out

all : $(NAME)

$(NAME) : $(OBJS) ShrubberyCreationForm.hpp AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all

PHONY : clean