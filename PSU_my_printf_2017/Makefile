##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##
SRC	=	my_put_nbrunsigned.c \
		my_putstr_octal.c \
		my_put_nbr_bin.c \
		my_put_nbr_hexa.c \
		my_put_nbr_base.c \
		my_putchar.c \
		my_put_nbr.c \
		my_strlen.c \
		my_putstr.c \
		my_printf.c	\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

NAME	=	libmy.a

NAME2	=	print

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME2) $(SRC)
		ar rc $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f $(NAME2)
		rm -f *~

re:		fclean all

.PHONY : 	all clean fclean re
