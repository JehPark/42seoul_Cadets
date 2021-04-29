CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc

SRCDIR = srcs
INCDIR = includes
BDIR = srcs/bonus
NAME = libft.a

SRCS_B = $(wildcard $(BDIR)/*.c)
OBJS_B = $(SRCS_B:.c=.o)

SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(INCDIR)

bonus: $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)

clean:
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all

