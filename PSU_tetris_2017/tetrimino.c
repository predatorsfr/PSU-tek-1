/*
** EPITECH PROJECT, 2018
** tetrimino fonctions
** File description:
** tetriminos
*/

#include "my.h"

void write_size(int a, int b, int c, char *str)
{
	int i = 0;

	my_printf("Size %c*%c :  Color %c :\n", a, b, c);
	while (str[i] != '*')
		i++;
	if (str[i-1] == '\n' && str[i-2] > 48 && str[i-2] < 57) {
		i++;
	}
	while (str[i-1] == '*' || str[i-1] == ' ' || str[i-1] == '\n') {
		my_printf("%c", str[i-1]);
		i++;
	}
}

int write_tetrimino(t_struct *elem, int i)
{
	int a = 0;
	while (a != i) {
		read_tetrimino(elem->str[a], elem);
		name(elem, a);
		a++;
	}
	my_printf("Press any key to start Tetris\n");
	return (0);
}

void name(t_struct *elem, int a)
{
	char *name = malloc(sizeof(char) * 20);
	int i = 0;

	while (elem->str[a][i] != 46) {
		name[i] = elem->str[a][i];
		i++;
	}
	name[i] = '\0';
	my_printf("Tetriminos :  Name %s :  ", name);
	tetri_error(elem->tetri);
	free (name);
}

void tetri_error(char *str)
{
	if (str[0] < 48 || str[0] > 57) {
		if (str[2] < 48 || str[2] > 57) {
			my_printf("Error\n");
		}
	} else {
		tetri_size(str);
	}
}
