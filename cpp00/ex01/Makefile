# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 14:47:22 by ymabsout          #+#    #+#              #
#    Updated: 2024/06/05 16:37:52 by ymabsout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS = PhoneBook.cpp Main.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = header.hpp
NAME = phonebook

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS)  $< -o $@

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

PHONY:clean