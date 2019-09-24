/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** task02
*/
#include <unistd.h>
#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int y = 0;

	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0') {
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = 0;
	return (dest);
}
