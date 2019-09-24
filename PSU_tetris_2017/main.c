/*
** EPITECH PROJECT, 2018
** main
** File description:
** main for the tetris
*/

#include "my.h"

void help(char *exec)
{
	my_printf("Usage:\t%s [options]\nOptions:\n --help", exec);
	my_printf("\t\t\tDisplay th");
	my_printf("is help\n -L --level={num}\tStart Tetris at level num");
	my_printf(" (def: 1)\n -l --key-left={K}\tMove the tetrimino LEFT");
	my_printf(" using the K key (def: left arrow)\n -r --key-right={K}");
	my_printf("\tMove the tetrimino RIGHT using the K key (def: right");
	my_printf(" arrow)\n -t --key-turn={K}\tTURN the tetrimino clockwise");
	my_printf(" 90d using the K key (def: top arrow)\n -d --key-drop={K}");
	my_printf("\tDROP the tetrimino using the K key (def: down arrow)\n");
	my_printf(" -q --key-quit={K}\tQUIT the game using the K key (def");
	my_printf(": 'q' key)\n -p --key-pause={K}\tPAUSE/RESTART ");
	my_printf("the game using the K key (def: space bar)\n --map-size=");
	my_printf("{row, col}\tSet the numbers of rows and columns of the ma");
	my_printf("p (def: 20,10)\n -w --without-next\tHide next tetrimino");
	my_printf(" (def: false)\n -D --debug\t\tDebug mode (def: false)\n");
}

int error_handling(int ac, char **av, char **env)
{
	if (ac > 2)
		return (84);
	if (env[0] == NULL)
		return (84);
	return (0);
}

int main(int ac, char **av, char **env)
{
	if (error_handling(ac, av, env) == 84) {
		return (84);
	}
	if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == '-' && av[1][2] == 'h') {
			help(av[0]);
			return (0);
		} else if (av[1][0] == '-' && av[1][1] == 'D') {
			check_tetrimino(av[1], env);
		} else if (my_strcmp(av[1], "--debug") == 0) {
			check_tetrimino(av[1], env);
		}	else {
			return (84);
		}
	}
	default_print();
	return (0);
}
