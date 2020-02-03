/*
** EPITECH PROJECT, 2019
** my_putoctal.c
** File description:
** converti un decimal en octal
*/

#include"my.h"

void my_putoctal(int nb)
{
    int diviseur = 1;
    int compteur = 0;
    int i;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * - 1;
    }
    for (compteur = 0; nb / (diviseur * 8) != 0; compteur ++)
        diviseur = diviseur * 8;
    for (i = 0; i != compteur; i++) {
        my_putchar((nb / diviseur) + 48);
        nb = nb % diviseur;
        diviseur = diviseur / 8;
    }
    my_putchar(nb + 48);

}