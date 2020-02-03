/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_puthex.c
*/

#include"my.h"

void my_puthex(int nb)
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
            my_putchar((nb / diviseur) + 87);
        nb = nb % diviseur;
        diviseur = diviseur / 16;
    }
}