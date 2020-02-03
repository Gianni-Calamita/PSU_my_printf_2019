/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** affiche des caracteres et variable souhaité
*/

#include<stdarg.h>
#include<unistd.h>
#include"my.h"

int flags_is_equal(char *str, char *letter, int i, va_list start)
{
    int compteur;
    void (*flags[9])(va_list start);

    flags[0] = &letter_is_d;
    flags[1] = &letter_is_d;
    flags[2] = &letter_is_c;
    flags[3] = &letter_is_s;
    flags[4] = &letter_is_u;
    flags[5] = &letter_is_x;
    flags[6] = &letter_is_x_maj;
    flags[7] = &letter_is_o;
    flags[8] = &letter_is_b;
    for (compteur = 0; letter[compteur] != '\0'; compteur++) {
        if (letter[compteur] == str[i + 1]) {
            flags[compteur](start);
            i++;
        }
    }
    return (i);
}

int when_is_a_flags(char *str, int i, va_list start, char *letter)
{
    if (str[i + 1] != 37)
        i = flags_is_equal(str, letter, i, start);
    else {
        my_putchar(37);
        i ++;
    }
    return (i);
}

int my_printf(char *str, ...)
{
    int i;
    char *letter = "dicsuxXob";
    va_list start;

    va_start(start, str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 37)
            i = when_is_a_flags(str, i, start, letter);
        else
            my_putchar(str[i]);
    }
    return (0);
    va_end(start);
}