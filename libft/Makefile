CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCDIR = srcs
INCDIR = includes
BDIR = srcs/bonus
NAME = libft.a

SRCS = $(SRCDIR)/ft_memset.c \
	$(SRCDIR)/ft_bzero.c \
	$(SRCDIR)/ft_memcpy.c \
	$(SRCDIR)/ft_memccpy.c \
	$(SRCDIR)/ft_memmove.c \
	$(SRCDIR)/ft_memchr.c \
	$(SRCDIR)/ft_memcmp.c \
	$(SRCDIR)/ft_strlen.c \
	$(SRCDIR)/ft_strlcpy.c \
	$(SRCDIR)/ft_strlcat.c \
	$(SRCDIR)/ft_strchr.c \
	$(SRCDIR)/ft_strrchr.c \
	$(SRCDIR)/ft_strnstr.c \
	$(SRCDIR)/ft_strncmp.c \
	$(SRCDIR)/ft_atoi.c \
	$(SRCDIR)/ft_isalpha.c \
	$(SRCDIR)/ft_isdigit.c \
	$(SRCDIR)/ft_isalnum.c \
	$(SRCDIR)/ft_isascii.c \
	$(SRCDIR)/ft_isprint.c \
	$(SRCDIR)/ft_toupper.c \
	$(SRCDIR)/ft_tolower.c \
	$(SRCDIR)/ft_calloc.c \
	$(SRCDIR)/ft_strdup.c \
	$(SRCDIR)/ft_substr.c \
	$(SRCDIR)/ft_strjoin.c \
	$(SRCDIR)/ft_strtrim.c \
	$(SRCDIR)/ft_split.c \
	$(SRCDIR)/ft_itoa.c \
	$(SRCDIR)/ft_strmapi.c \
	$(SRCDIR)/ft_putchar_fd.c \
	$(SRCDIR)/ft_putstr_fd.c \
	$(SRCDIR)/ft_putendl_fd.c \
	$(SRCDIR)/ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

SRCS_B = $(BDIR)/ft_lstnew.c \
		 $(BDIR)/ft_lstadd_front.c \
		 $(BDIR)/ft_lstsize.c \
		 $(BDIR)/ft_lstlast.c \
		 $(BDIR)/ft_lstadd_back.c \
		 $(BDIR)/ft_lstdelone.c \
		 $(BDIR)/ft_lstclear.c \
		 $(BDIR)/ft_lstiter.c \
		 $(BDIR)/ft_lstmap.c

OBJS_B = $(SRCS_B:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INCDIR)

bonus: $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)

so: $(OBJS)
	gcc -shared -o libft.so $(OBJS)

clean:
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
