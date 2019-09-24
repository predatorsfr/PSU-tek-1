/*
** EPITECH PROJECT, 2017
** myswap
** File description:
**myswap
*/

#include "my.h"

void	my_swap(t_struct *elem, char *a, char *b, int j)
{
	char *temp;

	temp = a;
	elem->str[j-1] = b;
	elem->str[j] = temp;
}
