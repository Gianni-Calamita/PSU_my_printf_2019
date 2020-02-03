/*
** EPITECH PROJECT, 2019
** my_putHEX.c
** File description:
** affiche un nombre en hexa en majuscule
*/

#include"my.h"

void my_puthex_maj(int nb)
{
    int diviseur = 1;
    int compteur = 0;
    int i;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * - 1;
    }
    for (compteur = 0; nb / (diviseur * 16) != 0; compteur ++)
        diviseur = diviseur * 16;
    for (i = 0; i != compteur + 1; i++) {
        if (nb / diviseur < 10)
            my_putchar((nb / diviseur) + 48);
        else
            my_putchar((nb / diviseur) + 55);
        nb = nb % diviseur;
        diviseur = diviseur / 16;
    }
}