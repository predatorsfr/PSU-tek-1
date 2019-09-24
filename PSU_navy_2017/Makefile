##
## EPITECH PROJECT, 2018
## makefile
## File description:
## raphael.dubois@epitech.eu
##

SRC	=	main.c \
		src/my_printf.c\
		src/lib.c\
		map.c \
		src/my_strdup.c\
		src/getline.c\
		player1.c\
		player2.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Wextra

NAME	=	navy

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
