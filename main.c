/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main de demonstration
*/

#include"my.h"
#include<stddef.h>

int main(int ac, char **av)
{
    int i;

    if (ac >= 2) {
        my_printf("La(es) phrase(s) que vous avez entrez est/sont : \n%s\n", av[1]);
        for (i = 2; av[i] != NULL; i++)
            my_printf("%s\n",av[i]);
    }
    else
        my_printf("Vous ne voulez rien afficher\n");
    return (0);
}
