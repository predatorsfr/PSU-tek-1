##
## EPITECH PROJECT, 2017
## makefile
## File description:
## 
##

SRC	=	main.c \

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -l c_graph_prog

NAME	=	my_sokoban

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME) -lncurses
clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f *~
		rm -f src/*~
		rm -f include/*~

re:		fclean all

.PHONY :	all clean fclean re
