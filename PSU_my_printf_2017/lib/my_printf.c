/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** raphael.dubois@epitech.eu
*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int flags1(int	i, char *str, va_list ap);
int flags2(int	i, char *str, va_list ap);
int flags3(int	i, char *str, va_list ap);

void	compile(va_list ap, int     i, char *str)
{
	while (str[i] != 0) {
		flags1(i, str, ap);
		if (str[i] == '%')
			i++;
		else
			write(1, &str[i], sizeof(char));
		i++;
	}
}

int	flags1(int	i, char *str, va_list ap)
{
	if (str[i] == '%') {
		i++;
		switch (str[i]) {
		case 's':
			my_putstr(va_arg(ap, char*));
			break;
		case 'S':
			my_putstr_octal(va_arg(ap, char*));
			break;
		case 'd':
			my_put_nbr(va_arg(ap, int));
			break;
		case 'b':
			my_put_nbr_bin(va_arg(ap, unsigned int), "01");
			break;
		default:
			flags2(i, str, ap);
		}
	}
}

int	flags2(int	i, char *str, va_list ap)
{
	switch (str[i]) {
	case 'i':
		my_put_nbr(va_arg(ap, int));
		break;
	case 'c':
		my_putchar((char) va_arg(ap, int));
		break;
	case '%':
		my_putchar('%');
		break;
	case 'p':
		my_put_nbr_hexa(va_arg(ap,
				       unsigned int),
				"0123456789abcdef");
		break;
	default:
		flags3(i, str, ap);
	}
}

int	flags3(int	i, char *str, va_list ap)
{
	switch (str[i]) {
	case 'x':
		my_put_nbr_base(va_arg(ap, int), "0123456789abcdef");
		break;
	case 'X':
		my_put_nbr_base(va_arg(ap, long), "0123456789ABCDEF");
		break;
	case 'u':
		my_put_nbrunsigned(va_arg(ap, unsigned int));
		break;
	case 'o':
		my_put_nbr_base(va_arg(ap, long), "01234567");
		break;
	default:
		write(1, "%", sizeof(char));
		write(1, &str[i], sizeof(char));
	}
}

int  my_printf(char *str, ...)
{
	int	i = 0;
	va_list	ap;

	va_start(ap, str);
	compile(ap, i, str);
	va_end(ap);
	return 0;
}
