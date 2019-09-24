/*
** EPITECH PROJECT, 2017
** 
** File description:
** 
*/

void    my_put_nbr_bin(int nb, char *base)
{
	int   j;
	int   div;
	int   size;

	size = my_strlen(base);
	if (nb < 0)
		nb = -nb;
	div = 1;
	while ((nb / div) >= size)
		div = div * size;
	while (div > 0)
	{
		j = (nb / div) % size;
		my_putchar(base[j]);
		div = div / size;
	}
}
