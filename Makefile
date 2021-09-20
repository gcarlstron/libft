SRC =  ft_isalpha.c
SRC += ft_isdigit.c
SRC += ft_isalnum.c
SRC += ft_isascii.c
SRC += ft_isprint.c
SRC += ft_strlen.c
SRC += ft_toupper.c
SRC += ft_tolower.c
SRC += ft_strchr.c
SRC += ft_strrchr.c
SRC += ft_memset.c
SRC += ft_strncmp.c
SRC += ft_bzero.c
SRC += ft_memcpy.c
SRC += ft_memmove.c
SRC += ft_memchr.c
SRC += ft_memcmp.c
SRC += ft_strlcpy.c
SRC += ft_strlcat.c
SRC += ft_strnstr.c
SRC += ft_atoi.c
SRC += ft_calloc.c
SRC += ft_strdup.c
SRC += ft_substr.c
SRC += ft_strjoin.c
SRC += ft_strtrim.c
SRC += ft_split.c
SRC += ft_itoa.c
SRC += ft_strmapi.c
SRC += ft_striteri.c
SRC += ft_putchar_fd.c
SRC += ft_putstr_fd.c
SRC += ft_putendl_fd.c
SRC += ft_putnbr_fd.c
BNS =  ft_lstnew.c
BNS += ft_lstadd_front.c
BNS += ft_lstsize.c
BNS += ft_lstlast.c
BNS += ft_lstadd_back.c
BNS += ft_lstdelone.c
BNS += ft_lstclear.c
BNS += ft_lstiter.c
BNS += ft_lstmap.c


OBJ = $(SRC:.c=.o)
OBJB = $(BNS:.c=.o)

NAME = libft.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

.c.o:
	clang -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJ)
	rm -f $(OBJB)

fclean: clean
	rm -f $(NAME)

bonus: $(NAME) $(OBJB)
	ar rcs $(NAME) $(OBJ) $(OBJB)

re: fclean all

.PHONY: all clean fclean re bonus