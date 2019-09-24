/*
** EPITECH PROJECT, 2018
** navy
** File description:
** navy
*/

#include "my.h"

void handler1(int signum)
{
	if (signum == SIGUSR2)
		my_printf("successfully connected\n");
}

void player2(char **av)
{
	if (av[1][0] >= '0' || av[1][0] <= '9') {
		struct sigaction sb;
		sb.sa_handler = handler1;

		kill(my_atoi(av[1]), SIGUSR1);
		my_printf("successfully connected\n");
		while (pause) {
			if (sigaction(SIGUSR2, &sb, NULL) == -1)
				write(2, "sigaction error\n", 16);
		}
	}
}
