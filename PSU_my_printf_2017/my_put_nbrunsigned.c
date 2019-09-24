/*
** EPITECH PROJECT, 2017
** my_put_nbrunsigned
** File description:
** raphael.dubois@epitech.eu
*/
#include "my.h"

void     my_put_nbrunsigned(unsigned int nb)
{
	if (nb > 9)
		my_put_nbr(nb / 10);
	my_putchar((nb % 10) + 48);
}
