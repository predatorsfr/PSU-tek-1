##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##
SRC	=	main.c	\
		src/lonely_ls.c	\
		src/ls_cases.c	\
		src/tosomething.c \
		src/print.c \
		lib/my_printf.c \
		lib/my_putchar.c \
		lib/my_put_nbr.c \
		lib/my_putstr.c \
		lib/my_strcat.c \
		lib/my_strlen.c \

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -g3

NAME	=	my_ls

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f *~
		rm -f src/*~
		rm -f lib/*~

re:		fclean all

.PHONY : 	all clean fclean re
