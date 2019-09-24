/*
** EPITECH PROJECT, 2017
** tosomehting.c
** File description:
** raphael.dubois@epitech.eu
*/
#include        <stdio.h>
#include        <sys/types.h>
#include        <dirent.h>
#include        <sys/stat.h>
#include        <string.h>
#include        <grp.h>
#include        <pwd.h>
#include        "../include/my.h"

void mode_to_letters(int mode, char str[])
{
	my_strcpy(str, "----------");
	S_ISDIR(mode) ? str[0] = 'd' : 0;
	S_ISCHR(mode) ? str[0] = 'c' : 0;
	S_ISBLK(mode) ? str[0] = 'b' : 0;
	mode & S_IRUSR ? str[1] = 'r' : 0;
	mode & S_IWUSR ? str[2] = 'w' : 0;
	mode & S_IXUSR ? str[3] = 'x' : 0;
	mode & S_IRGRP ? str[4] = 'r' : 0;
	mode & S_IWGRP ? str[5] = 'w' : 0;
	mode & S_IXGRP ? str[6] = 'x' : 0;
	mode & S_IROTH ? str[7] = 'r' : 0;
	mode & S_IWOTH ? str[8] = 'w' : 0;
	mode & S_IXOTH ? str[9] = 'x' : 0;
	str[10] = 0;
}

char *uid_to_name(uid_t uid)
{
	struct   passwd *pw_ptr;

	pw_ptr = getpwuid(uid);
	if (pw_ptr == NULL)
		return NULL;
	else
		return pw_ptr->pw_name;
}
char *gid_to_name(gid_t gid)
{
	struct group    *grp_ptr;

	grp_ptr = getgrgid(gid);
	if (grp_ptr == NULL)
		return NULL;
	else
		return grp_ptr->gr_name;

}

char *my_strcpy(char *dest, char *src)
{
	int	i = 0;

	while (src[i]) {
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = 0;
	return (dest);
}
