/*
** EPITECH PROJECT, 2018
** tetriminos file
** File description:
** tetrimino
*/

#include "my.h"

int default_print(void)
{
	DIR *dir;
	struct dirent *sd = malloc(sizeof(*sd));
	char str[4096] = " ";

	if ((dir = opendir("tetriminos")) == NULL)
		return (84);
	while ((sd = readdir(dir)) != NULL) {
		if (sd->d_name[0] != '.') {
			my_strcat(str, sd->d_name);
			my_strcat(str, " ");
		}
	}
	closedir(dir);
	str_to_array(str);
	free(sd);
	return (0);
}

void algorithm(t_struct *elem, char *str)
{
	int i = 1;
	int j = 0;

	elem->str[0] = malloc(sizeof(char) * 60);
	while (str[i] != '\0') {
		if (str[i] == ' ') {
			i++;
			elem->str[elem->k][j] = '\0';
			j = 0;
			elem->k++;
			elem->str[elem->k] = malloc(sizeof(char) * 60);
		}
		elem->str[elem->k][j] = str[i];
		j++;
		i++;
	}
	elem->str[elem->k] = '\0';
}

int str_to_array(char *str)
{
	t_struct *elem = malloc(sizeof(*elem));

	elem->k = 0;
	elem->str = malloc(sizeof(char *) * 15);
	if (elem->str == NULL)
		return (84);
	algorithm(elem, str);
	pushswap(elem, elem->k);
	free(elem);
}

int pushswap(t_struct *elem, int i)
{
	int j = 1;
	int k = 1;

	while (k != 250) {
		while (j != i) {
			if (my_strcmp(elem->str[j-1], elem->str[j]) > 0)
				my_swap(elem, elem->str[j-1], elem->str[j], j);
			j++;
		}
		if (k != 250)
			j = 1;
		k++;
	}
	my_printf("Tetriminos :  %d\n", i);
	write_tetrimino(elem, i);
	return (0);
}

int read_tetrimino(char *av, t_struct *elem)
{
	char name[30] = "tetriminos/";
	int fd = open(my_strcat(name, av), O_RDONLY);
	int size = read(fd, name, 4096);

	elem->tetri = my_strdup(name);
	if (fd == -1) {
		my_printf("Please insert a correct path\n");
		return (84);
	}
	return (0);
}
