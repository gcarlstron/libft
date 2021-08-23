SRC =  ft_isalpha.c
SRC += ft_isdigit.c
SRC += ft_isalnum.c
SRC += ft_isascii.c
SRC += ft_isprint.c
SRC += ft_strlen.c

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

.PHONY: all clean fclean re