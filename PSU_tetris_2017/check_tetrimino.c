/*
** EPITECH PROJECT, 2018
** check tetrimino
** File description:
** tetrimino
*/

#include "my.h"

void print_debug(char **key)
{
	my_printf("*** DEBUG MODE ***\n");
	my_printf("Key Left :  %s\n", key[1]);
	my_printf("Key Right :  %s\n", key[0]);
	my_printf("Key Turn :  %s\n", key[2]);
	my_printf("Key Drop :  %s\n", key[3]);
	my_printf("Key Quit :  %s\n", key[5]);
	my_printf("Key Pause :  %s\n", key[6]);
	my_printf("Next :  %s\n", key[8]);
	my_printf("Level :  %s\n", key[9]);
	my_printf("Size :  %s\n", key[7]);
}

void tetri_size(char *str)
{
	int a;
	int b;
	int c;
	int k = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 48 && str[i] <= 57 && k == 0) {
			a = str[i];
			k++;
		} else if (str[i] >= 48 && str[i] <= 57 && k == 1) {
			b = str[i];
			k++;
		} else if (str[i] >= 48 && str[i] <= 57 && k == 2) {
			c = str[i];
			k++;
		}
		i++;
	}
	write_size(a, b, c, str);
}

int	check_tetrimino(char *av, char **env)
{
	char **key = malloc(sizeof(char *) * 10);

	if (key == NULL)
		return (84);
	setupterm((char *)0, 1, (int *) 0);
	key[0] = my_strdup(tigetstr("kcuf1"));
	key[1] = my_strdup(tigetstr("kcub1"));
	key[2] = my_strdup(tigetstr("kcuu1"));
	key[3] = my_strdup(tigetstr("kcud1"));
	key[5] = my_strdup("q");
	key[6] = my_strdup("space");
	key[7] = my_strdup("20*10");
	key[8] = my_strdup("No");
	key[9] = my_strdup("1");
	print_debug(key);
	free(key);
	return (0);
}
