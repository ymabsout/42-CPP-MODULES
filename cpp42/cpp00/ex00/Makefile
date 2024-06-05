# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/05 16:37:03 by ymabsout          #+#    #+#              #
#    Updated: 2024/06/05 16:38:18 by ymabsout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++
CFLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Megaphone

all:$(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) $< -o $@

fclean :
	rm -rf $(NAME)

re : fclean all
