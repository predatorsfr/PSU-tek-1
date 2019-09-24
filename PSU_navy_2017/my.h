/*
** EPITECH PROJECT, 2017
** my_h
** File description:
** my_h
*/

# ifndef MY_H
# define MY_H
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*************/
/**FUNCTIONS**/
/*************/
void	my_putchar(char c);
int	my_put_nbr(int nbr);
int	my_strlen(char const *str);
void	player2(char **av);
int	my_putstr(char const *str);
int	my_atoi(char *nbr);
int	send_signal(void);
int	my_printf(char *str, ...);
char	*my_strdup(char const *src);
int	map(void);
char	*gnl(void);

/**********/
/**struct**/
/**********/

typedef struct navy {
	char **array;
	char *av;
} navy;

#endif	/* MY_H */
