/*
** EPITECH PROJECT, 2019
** my_printf_fonction_one.c
** File description:
** contient des lanceurs de fonction pour le my_printf
*/

#include<stdarg.h>
#include"my.h"

void letter_is_d(va_list start)
{
    int nb = va_arg(start, int);

    my_putnbr(nb);
}

void letter_is_c(va_list start)
{
    char c = va_arg(start, int);

    my_putchar(c);
}

void letter_is_s(va_list start)
{
    char *str = va_arg(start, char *);

    my_putstr(str);
}

void letter_is_u(va_list start)
{
    unsigned int nb = va_arg(start, unsigned int);

    my_putunbr(nb);
}

void letter_is_x(va_list start)
{
    int nb = va_arg(start, int);

    my_puthex(nb);
}