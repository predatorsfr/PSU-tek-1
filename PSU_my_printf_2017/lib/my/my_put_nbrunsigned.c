/*
** EPITECH PROJECT, 2017
** 
** File description:
** 
*/

void     my_put_nbrunsigned(unsigned int nb)
{
	if (nb > 9)
		my_put_nbr(nb / 10);
	my_putchar((nb % 10) + 48);
}
