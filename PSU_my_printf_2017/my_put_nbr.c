/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** raphael.dubois@epitech.eu
*/
#include <unistd.h>
#include "my.h"

int	my_put_nbr(int nbr)
{
	if (nbr > 2147483647 || nbr == -2147483648) {
		write(1, "-2147483648", 11);
		return 0;
	}
	if (nbr > 9)
		my_put_nbr(nbr / 10);
	my_putchar((nbr % 10) + 48);
	return 0;
}
