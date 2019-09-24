/*
** EPITECH PROJECT, 2017
** my_put_nbr_hexa
** File description:
** raphael.dubois@epitech.eu
*/
#include <unistd.h>
#include "my.h"

int		my_put_nbr_hexa(unsigned int nb, char *base)
{
	int		j;
	unsigned int	div;
	unsigned int	size;

	if (nb == 0) {
		my_putstr("(nil)");
		return 0;
	}
	my_putstr("0x");
	size = my_strlen(base);
	div = 1;
	while ((nb / div) >= size)
		div = div * size;
	while (div > 0) {
		j = (nb / div) % size;
		my_putchar(base[j]);
		div = div / size;
	}
}
