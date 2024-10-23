# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecosta <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 11:40:16 by jecosta           #+#    #+#              #
#    Updated: 2024/10/22 11:54:48 by jecosta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror -c
HEADERS = libft.h
SRCS = *.c
OBJS = $(SRCS:.c = .O)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -I $(HEADERS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf *.o

fclean: clean
	rm $(NAME)

re: fclean all
