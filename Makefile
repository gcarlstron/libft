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



OBJ = $(SRC:.c=.o)

NAME = libft.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

.c.o:
	clang -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

main:
	clang main.c $(SRC)

.PHONY: all clean fclean re