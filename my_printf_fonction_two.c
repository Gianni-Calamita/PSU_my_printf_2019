/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_printf_fonction_two.c
*/

#include<stdarg.h>
#include"my.h"

void letter_is_o(va_list start)
{
    int nb = va_arg(start, int);

    my_putoctal(nb);
}

void letter_is_b(va_list start)
{
    int nb = va_arg(start, int);

    my_putbinary(nb);
}

void letter_is_x_maj(va_list start)
{
    int nb = va_arg(start, int);

    my_puthex_maj(nb);
}