# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/01 14:17:40 by jehpark           #+#    #+#              #
#    Updated: 2021/05/13 10:21:30 by jehpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc

SRCDIR = srcs
INCDIR = includes
UTILDIR = srcs/utils

SRC_LIST = ft_mkinfo.c \
		   ft_printf.c \
		   ft_starinfo.c \
		   ft_switch.c

UTILS_LIST = ft_address.c \
			 ft_atof.c \
			 ft_atoi.c \
			 ft_cntdigit.c \
			 ft_cnthexdigit.c \
			 ft_cntudigit.c \
			 ft_cntulhexdigit.c \
			 ft_infoinit.c \
			 ft_isflag.c \
			 ft_isnum.c \
			 ft_isspace.c \
			 ft_isstar.c \
			 ft_itoa.c \
			 ft_itox.c \
			 ft_itox2.c \
			 ft_printsp.c \
			 ft_putchar.c \
			 ft_putchwiths.c \
			 ft_putdwithsp.c \
			 ft_putdwithsp2.c \
			 ft_putlstr.c \
			 ft_putnstr.c \
			 ft_putpercent.c \
			 ft_putswithsp.c \
			 ft_strlen.c \
			 ft_strscpy.c \
			 ft_treatnull.c \
			 ft_treatzero.c \
			 ft_uitoa.c

SRCS = $(addprefix $(SRCDIR)/, $(SRC_LIST))
OBJS_S = $(SRCS:.c=.o)

UTILS = $(addprefix $(UTILDIR)/, $(UTILS_LIST))
OBJS_U = $(UTILS:.c=.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS_S) $(OBJS_U)
	$(AR) $@ $(OBJS_S) $(OBJS_U)

%.o :%.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(INCDIR)

.PHONY: clean
clean:
	rm -rf $(OBJS_S) $(OBJS_U)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all


