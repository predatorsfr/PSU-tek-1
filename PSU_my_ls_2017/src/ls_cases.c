/*
** EPITECH PROJECT, 2017
** ls cases
** File description:
** raphael.dubois@epitech.eu
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
#include <dirent.h>
#include <errno.h>

#define NORMAL_COLOR "\x1B[0m"
#define GREEN "\x1B[32m"

int l_case(char *path)
{
	char *ctime();
	char modestr[11];
	char slash[256];
	DIR *dir = opendir(path);
	DIR *dir2 = opendir(path);
	int i = 0;

	if (dir == NULL)
		return(84);
	while ((sd = readdir(dir)) != NULL) {
		if (sd->d_name[0] != '.') {
			pathto(slash, path);
			i = i + sb.st_blocks;
		}
	}
	my_printf("total %dK\n", i/2);
	while ((sd = readdir(dir2)) != NULL)
		printl(slash, path, modestr);
	closedir(dir);
}

int R_case(char *path)
{
	DIR *dir = opendir(path);
	char d_path[255];

	if (dir == NULL)
		return(84);
	while ((sd = readdir(dir)) != NULL) {
		if ((sd->d_name[0] == '.') == 0)
			if (sd->d_type != DT_DIR)
				my_printf("%s%s ", NORMAL_COLOR, sd->d_name);
			else if (sd->d_type == DT_DIR &&
				 (sd->d_name[0] == '.') == 0) {
				my_printf("%s\n./%s:\n", GREEN, sd->d_name);
				path = d_path;
				R_case(path);
			}
	}
	closedir(dir);
	return 0;
}

int color(const struct stat *sb, char *filename)
{
	if (sd->d_type == DT_DIR)
		my_printf("\033[1;36m%s \033[0m\n", filename);
	else if (sb->st_mode & S_IXUSR)
		my_printf("\033[1;32m%s \033[0m\n", filename);
	else
		my_printf("\033[0m%s\n\033[0m", filename);
	return 0;
}
