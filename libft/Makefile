CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc

SRCDIR = srcs
INCDIR = includes

TARGET = libft.a
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(INCDIR)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(TARGET)

re: fclean all
