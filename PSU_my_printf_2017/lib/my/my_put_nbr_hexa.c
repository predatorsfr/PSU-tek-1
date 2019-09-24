/*
** EPITECH PROJECT, 2017
** my_put_nbr_hexa
** File description:
** 
*/

void		my_put_nbr_hexa(unsigned int nb, char *base)
{
	int		j;
	unsigned int	div;
	unsigned int	size;

	size = my_strlen(base);
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
