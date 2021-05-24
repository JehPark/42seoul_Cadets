CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCDIR = includes

NAME = stacksort

FUNC = basicsort \
	ft_behavior \
	sorting \
	stack \
	utils \
	utils2

OBJS = $(addsuffix .o, $(FUNC))
SRCS = $(addsuffix .c, $(FUNC))

.PHONY: all
all: &(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $? -I $(INCDIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(INCDIR)

.PHONY: clean
clean:
	rm -rf $(OBJS)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all