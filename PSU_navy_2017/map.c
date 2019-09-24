/*
** EPITECH PROJECT, 2018
** map
** File description:
** map
*/

#include "my.h"

int map(void)
{
	navy *navy = malloc(sizeof(*navy));

	navy->array = malloc(sizeof(char *) * 20 * 10);
	for (int i = 0; i != 11; i++)
		navy->array[i] = malloc(sizeof(char) * 20);
	navy->array[0] = my_strdup(" |A B C D E F G H\n");
	navy->array[1] = my_strdup("-+---------------\n");
	navy->array[2] = my_strdup("1|. . . . . . . .\n");
	navy->array[3] = my_strdup("2|. . . . . . . .\n");
	navy->array[4] = my_strdup("3|. . . . . . . .\n");
	navy->array[5] = my_strdup("4|. . . . . . . .\n");
	navy->array[6] = my_strdup("5|. . . . . . . .\n");
	navy->array[7] = my_strdup("6|. . . . . . . .\n");
	navy->array[8] = my_strdup("7|. . . . . . . .\n");
	navy->array[9] = my_strdup("8|. . . . . . . .\n");
	navy->array[10][0] = 0;
	for (int j = 0; navy->array[j] != 0; j++)
		my_printf("%s", navy->array[j]);
}
