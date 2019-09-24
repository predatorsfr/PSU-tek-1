/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "my.h"

void handler(int signum)
{
	if (signum == SIGUSR1)
		my_printf("\nenemy connected\n");
}

int send_signal(void)
{
	struct sigaction sa;

	sa.sa_handler = handler;
	my_printf("waiting for enemy connection ...\n");
	while (pause) {
		if (sigaction(SIGUSR1, &sa, NULL) == -1)
			write(2, "sigaction error\n", 16);
	}
	return 0;
}
