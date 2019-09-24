/*
** EPITECH PROJECT, 2017
** l.c
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

char *smtime(struct stat *sb)
{
	char *str;

	str = 4+ctime(&sb->st_mtime);
	str[my_strlen(str) - 9] = '\0';
	return str;
}

void *pathto(char *slash, char *path)
{
	my_strcpy(slash, path);
	my_strcat(slash, "/");
	my_strcat(slash, sd->d_name);
	stat(slash, &sb);
}

void *printl(char *slash, char *path, char *modestr)
{
	if (sd->d_name[0] != '.') {
		pathto(slash, path);
		mode_to_letters(sb.st_mode, modestr);
		my_printf("%s. %d ", modestr, (int)sb.st_nlink);
		my_printf("%s ", uid_to_name(sb.st_uid));
		my_printf("%s ", gid_to_name(sb.st_gid));
		my_printf("%d %s ", sb.st_size, smtime(&sb));
		color(&sb, sd->d_name);
	}
}

void *printlonely(char *modestr)
{
	stat(sd->d_name, &sb);
	if (sd->d_name[0] != '.') {
		mode_to_letters(sb.st_mode, modestr);
		my_printf("%s. %d ", modestr, (int)sb.st_nlink);
		my_printf("%s ", uid_to_name(sb.st_uid));
		my_printf("%s ", gid_to_name(sb.st_gid));
		my_printf("%d %s ", sb.st_size, smtime(&sb));
		color(&sb, sd->d_name);
	}
}
