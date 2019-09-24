/*
** EPITECH PROJECT, 2017
** my_putstr_octal
** File description:
** raphael.dubois@epitech.eu
*/
#include "my.h"

void	my_putstr_octal(char *str)
{
	int	i;

	i = 0;
	while (str[i]) {
		if (str[i] < 32 || str[i] >= 127) {
			my_putchar('\\');
			if (str[i] < 8 && str[i] > 0)
				my_putstr("00");
			else if (str[i] < 64 && str[i] > 0)
				my_putchar('0');
			my_put_nbr_base((unsigned char)str[i], "01234567");
		} else {
			my_putchar(str[i]);
		}
		i++;
	}
}
