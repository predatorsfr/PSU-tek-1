/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** raphael.dubois@epitech.eu
*/
#include <unistd.h>
#include "../include/my.h"

int my_putstr(char const *str)
{
	if (str == NULL) {
		write(1, "(null)", 6);
		return 0;
	}
	write(1, str, my_strlen(str));
	return 0;
}
