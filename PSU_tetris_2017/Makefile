##
## EPITECH PROJECT, 2018
## makefile
## File description:
## raphael.dubois@epitech.eu
##

SRC	=	check_tetrimino.c	\
		main.c		\
		src/my_strcmp.c	\
		src/my_printf.c	\
		src/lib.c	\
		src/my_strdup.c	\
		src/getline.c	\
		my_strcat.c	\
		my_swap.c	\
		sorts_default.c	\
		tetrimino.c	\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -g -lncurses

NAME	=	tetris

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f *~
		rm -f src/*~
		rm -f include/*~

re:		fclean all

.PHONY :	all clean fclean re
