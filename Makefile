# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 22:39:40 by shahn             #+#    #+#              #
#    Updated: 2022/07/10 03:15:58 by shahn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_putnbr.c ft_putstr.c libft.c ft_puthexptr.c \
	ft_putlowerhex.c ft_putupperhex.c ft_putnbr_un.c ft_revstr.c

RM			= rm -f
LIB			= ar -rcs
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -c -I.

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean all