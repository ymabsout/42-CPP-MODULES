# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 18:10:13 by ymabsout          #+#    #+#              #
#    Updated: 2024/06/04 18:12:15 by ymabsout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -c
SRCS = tests.cpp Account.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = Account.hpp
NAME = bank

all:$(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)	

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

PHONY:clean