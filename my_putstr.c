/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** affiche une str
*/

#include"my.h"

void my_putstr(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}