/*
** EPITECH PROJECT, 2017
** strcmp
** File description:
** raphael.dubois@epitech.eu my_printf
*/

#include "../my.h"

int	my_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i]) {
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}
