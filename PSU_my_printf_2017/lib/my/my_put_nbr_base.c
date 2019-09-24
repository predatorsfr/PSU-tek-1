/*
** EPITECH PROJECT, 2017
** 
** File description:
** 
*/

void	my_put_nbr_base(long nb, char *base)
{
  int	j;
  long	div;
  long	size;

  size = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
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
