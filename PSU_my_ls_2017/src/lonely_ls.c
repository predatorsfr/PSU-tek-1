/*
** EPITECH PROJECT, 2017
** lonely_ls
** File description:
** raphael.dubois@epitech.eu
*/

#include "../include/my.h"
#include <stdio.h>
#include <dirent.h>
#include <errno.h>

int lonely_ls(void)
{
	DIR *dir;

	dir = opendir(".");
	if (dir == NULL)
		return(84);
	while ((sd = readdir(dir)) != NULL) {
		if (sd->d_name[0] != '.') {
			stat(sd->d_name, &sb);
			color(&sb, sd->d_name);
		}
	}
	closedir(dir);
	return(0);
}

int ls_lonely_path(char const *arg)
{
	DIR *dir;

	dir = opendir(arg);
	if (dir == NULL)
		return(84);
	while ((sd = readdir(dir)) != NULL) {
		if (sd->d_name[0] != '.') {
			stat(sd->d_name, &sb);
			color(&sb, sd->d_name);
		}
	}
	closedir(dir);
	return(0);
}

int lonely_lcase(void)
{
	char *ctime();
	char modestr[11];
	DIR *dir = opendir(".");
	DIR *dir2 = opendir(".");
	int i = 0;

	if (dir == NULL)
		return(84);
	while ((sd = readdir(dir)) != NULL) {
		if (sd->d_name[0] != '.') {
			stat(sd->d_name, &sb);
			i = i + sb.st_blocks;
		}
	}
	my_printf("total %dK\n", i/2);
	while ((sd = readdir(dir2)) != NULL)
		printlonely(modestr);
	closedir(dir);
}
