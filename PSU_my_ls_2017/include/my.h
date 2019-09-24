/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/
#include        <stdio.h>
#include        <sys/types.h>
#include        <dirent.h>
#include        <sys/stat.h>
#include        <string.h>
#include        <grp.h>
#include        <pwd.h>

#ifndef MY_H_
#define MY_H_
void	*printlonely(char *modestr);
void	*printl(char *slash, char *path, char *modestr);
void	*pathto(char *slash, char *path);
char	*my_strcat(char *dest, char *src);
int	lonely_lcase();
char	*smtime(struct stat *sb);
int	my_put_nbr_hexa(unsigned int nb, char *base);
void	my_put_nbr_bin(int nb, char *base);
void	my_put_nbrunsigned(unsigned int nb);
void	my_putstr_octal(char *str);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
void	my_swap(int *a, int *b);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
void	my_put_nbr_base(long nb, char *base);
char	*my_strcpy(char *dest, char *src);
int	colorR(struct stat *sb, char *filename, char d_path[], char *path);
int	color(const struct stat *sb, char *filename);
void	mode_to_letters(int mode, char str[]);
char	*uid_to_name(uid_t);
char	*gid_to_name(gid_t);
void	my_putchar(char c);
void	my_swap(int *a, int *b);
int	my_putstr(char const *str);
int	my_getnbr(char const *str);
int	sorts_alrdy_dn(int tab[], int ac);
int	*my_revtab(int tab[], int lenght);
int	*ra(int tab[], int lenght);
int	*sa(int tab[]);
int	stop_prog(int ac, int nb);
int	flag_count(int ac, char **av);
int	ls_flags(int ac, char **av, char **path);
int	lonely_ls();
int	ls_lonely_path(char const *av);
int	R_case(char *path);
int	l_case(char *path);
int	my_strcmp(char const *s1, char const *s2);
int	show_file_info(char *filename, int ac, char **av);
char	*uid_to_name(uid_t);
char	*gid_to_name(gid_t);
int	my_printf(char *str, ...);
struct stat sb;
struct dirent *sd;
#endif /*MY_H*/
