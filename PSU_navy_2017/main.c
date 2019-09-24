/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"

int help(char *av)
{
	if (av[0] == '-' && av[1] == 'h') {
		my_printf("USAGE\n\t./navy [first_player_pid]");
		my_printf(" navy_positions\nDESCRIPTION");
		my_printf("\n\tfirst_player_pid:  only for");
		my_printf(" the 2nd player.  pid of the");
		my_printf(" first player.\n\tnavy_positions:");
		my_printf(" file representing the");
		my_printf(" positions of the ships.\n");
	}
	return(0);
}

int error(int ac)
{
	if (ac < 2 || ac > 3)
		return(84);
	return(0);
}

int main(int ac, char **av)
{
	int PID;
	char *ar;

	if (error(ac) == 84) {
		my_printf("./navy -h \n");
		return(84);
	}
	if (ac == 2 && av[1][0] == '-') {
		help(av[1]);
		return(0);
	}
	PID = getpid();
	my_printf("my_pid:  %d\n", PID);
	if (av[1][0] < '0' || av[1][0] > '9')
		send_signal();
	player2(av);
	return 0;
}
