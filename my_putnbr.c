/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** affiche des nombres
*/

#include"my.h"

void my_putnbr(int nb)
{
    int diviseur = 1;
    int compteur = 0;
    int i;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * - 1;
    }
    for (compteur = 0; nb / (diviseur * 10) != 0; compteur ++)
        diviseur = diviseur * 10;
    for (i = 0; i != compteur; i++) {
        my_putchar((nb / diviseur) + 48);
        nb = nb % diviseur;
        diviseur = diviseur / 10;
    }
    my_putchar(nb + 48);
}