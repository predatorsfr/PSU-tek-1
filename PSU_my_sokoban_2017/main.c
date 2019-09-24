/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** raphael.dubois@epitech.eu
*/

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include "include/my.h"

int	main(int ac, char **av)
{
	file_stct *file = malloc(sizeof(*file));

	file->fp = fopen(av[1], "r");
	if (file->fp == NULL || ac < 2 || ac > 2)
		return 84;
	initscr();
	raw();
	while ((file->read = getline(&file->buff,
				     &file->buffsize, file->fp)) != -1) {
		printw("%s", file->buff);
	}
	getch();
	if (file->buff)
		free(file->buff);
	endwin();
	return 0;
}
