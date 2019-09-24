/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "../my.h"

char *gnl(void)
{
	char *buffer = malloc(sizeof(char) * 4096 + 1);
	int j = read(0, buffer, 4096);

	buffer[j] = '\0';
	return (buffer);
}
