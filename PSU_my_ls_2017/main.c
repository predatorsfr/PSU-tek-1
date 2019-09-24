/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** raphael.dubois@epitech.eu
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include <dirent.h>
#include <errno.h>

int ls_flags(int ac, char **av, char **path)
{
	int i = 1;
	int j = 1;

	while (i != ac) {
		while (av[i][j] != '\0') {
			switch (av[i][j]) {
			case 'l':
				l_case(*path);
				break;
			case 'R':
				R_case(*path);
				break;
			default:
				return(84);
			}
			j++;
		}
		j = 1;
		i++;
	}
	return (0);
}

int flag_count(int ac, char **av)
{
	int i = 1;
	int j = 0;
	char **path;

	while (i != ac) {
		if (av[i][0] != '-') {
			path[j] = av[i];
			j++;
		}
		i++;
	}
	i = 1;
	if (av[1][0] != '-')
		ls_lonely_path(av[1]);
	else if (av[1][0] == '-' && av[2] == NULL)
		lonely_lcase(ac);
	else
		ls_flags(ac, av, path);
	return(0);
}
int main(int ac, char **av)
{
	if (ac == 1)
		lonely_ls(ac);
	else
		flag_count(ac, av);
	return(0);
}
