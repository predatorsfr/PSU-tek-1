/*
** EPITECH PROJECT, 2017
** my_h
** File description:
** my_h
*/

# ifndef MY_H
# define MY_H
#include <curses.h>
#include <term.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>

/*************/
/**FUNCTIONS**/
/*************/

typedef struct t_struct {
char **str;
char *tetri;
int k;
} t_struct;

int	my_strcmp(char *s1, char *s2);
int check_tetrimino(char *av, char **env);
void	my_putchar(char c);
int	my_put_nbr(int nbr);
int	my_strlen(char const *str);
int	my_putstr(char const *str);
int	my_atoi(char *nbr);
int	my_printf(char *str, ...);
int flags(int ac, char **av);
char	*my_strdup(char const *src);
char	*gnl(void);
int default_print(void);
char *my_strcat(char *dest, char const *src);
char *clean_str(char *av);
void write_size(int a, int b, int c, char *str);
int read_tetrimino(char *av, t_struct *elem);
void tetri_size(char *str);
void tetri_error(char *str);
void name(t_struct *elem, int a);
int write_tetrimino(t_struct *elem, int i);
void print_tetrimino(char *str);
int default_print(void);
int str_to_array(char *str);
int pushswap(t_struct *elem, int i);

/**********/
/**struct**/
/**********/

void	my_swap(t_struct *elem, char *a, char *b, int j);

#endif	/* MY_H */
