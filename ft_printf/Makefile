# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/01 14:17:40 by jehpark           #+#    #+#              #
#    Updated: 2021/05/01 14:41:34 by jehpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc

SRCDIR = srcs
INCDIR = includes
UTILDIR = srcs/utils

SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS_S = $(SRCS:.c=.o)

UTILS = $(wildcard $(UTILDIR)/*.c)
OBJS_U = $(UTILS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_S) $(OBJS_U)
	$(AR) $@ $(OBJS_S) $(OBJS_U)

%.o :%.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(INCDIR)

clean:
	rm -rf $(OBJS_S) $(OBJS_U)

fclean: clean
	rm -rf $(NAME)

re: fclean all


