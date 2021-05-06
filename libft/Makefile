CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCDIR = srcs
INCDIR = includes
BDIR = srcs/bonus
NAME = libft.a

FUNC = ft_memset \
	ft_bzero \
	ft_memcpy \
	ft_memccpy \
	ft_memmove \
	ft_memchr \
	ft_memcmp \
	ft_strlen \
	ft_strlcpy \
	ft_strlcat \
	ft_strchr \
	ft_strrchr \
	ft_strnstr \
	ft_strncmp \
	ft_atoi \
	ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_toupper \
	ft_tolower \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_split \
	ft_itoa \
	ft_strmapi \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	ft_isspace \
	ft_strscpy \
	ft_intdigit

OBJS = $(addprefix objs/, $(addsuffix .o, $(FUNC)))
SRCS = $(addprefix srcs/, $(addsuffix .c, $(FUNC)))

FUNC_B = ft_lstnew \
		 ft_lstadd_front \
		 ft_lstsize \
		 ft_lstlast \
		 ft_lstadd_back \
		 ft_lstdelone \
		 ft_lstclear \
		 ft_lstiter \
		 ft_lstmap

OBJS_B = $(addprefix objs/, $(addsuffix .o, $(FUNC_B)))
SRCS_B = $(addprefix srcs/bonus/, $(addsuffix .c, $(FUNC_B)))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

objs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c -o $@ $?

bonus: $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)

objs/%.o: srcs/bonus/%.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c -o $@ $?

so: $(OBJS)
	gcc -shared -o libft.so $(OBJS)

clean:
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
