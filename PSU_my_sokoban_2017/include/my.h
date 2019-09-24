/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** raphael.dubois@epitech.eu
*/
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>

#ifndef MY_H_
#define MY_H_

typedef struct file_stct
{
	FILE * fp;
	char *buff;
	size_t buffsize;
	ssize_t read;

}file_stct;

#endif /*MY_H_*/
