/*
** EPITECH PROJECT, 2019
** my_putbinary.c
** File description:
** converti un decimal en binaire
*/

#include"my.h"

void my_putbinary(int nb)
{
    int diviseur = 1;
    int compteur = 0;
    int i;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * - 1;
    }
    for (compteur = 0; nb / (diviseur * 2) != 0; compteur ++)
        diviseur = diviseur * 2;
    for (i = 0; i != compteur; i++) {
        my_putchar((nb / diviseur) + 48);
        nb = nb % diviseur;
        diviseur = diviseur / 2;
    }
    my_putchar(nb + 48);
}