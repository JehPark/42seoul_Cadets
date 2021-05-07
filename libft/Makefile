CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

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

OBJS = $(addsuffix .o, $(FUNC))
SRCS = $(addsuffix .c, $(FUNC))

FUNC_B = ft_lstnew \
		 ft_lstadd_front \
		 ft_lstsize \
		 ft_lstlast \
		 ft_lstadd_back \
		 ft_lstdelone \
		 ft_lstclear \
		 ft_lstiter \
		 ft_lstmap

OBJS_B = $(addsuffix .o, $(FUNC_B))
SRCS_B = $(addsuffix .c, $(FUNC_B))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $?

bonus: $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $?

so: $(OBJS)
	gcc -shared -o libft.so $(OBJS)

clean:
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
