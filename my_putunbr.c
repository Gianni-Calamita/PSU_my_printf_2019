/*
** EPITECH PROJECT, 2019
** my_putunbr.c
** File description:
** affiche un nombre non signe
*/

#include"my.h"

void my_putunbr(unsigned int nb)
{
    int diviseur = 1;
    int compteur = 0;
    int i;

    for (compteur = 0; nb / (diviseur) >= 10; compteur ++)
        diviseur = diviseur * 10;
    for (i = 0; i != compteur; i++) {
        my_putchar((nb / diviseur) + 48);
        nb = nb % diviseur;
        diviseur = diviseur / 10;
    }
    my_putchar(nb + 48);
}