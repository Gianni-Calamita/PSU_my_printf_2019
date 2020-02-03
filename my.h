/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** contient tous les protorype de la bibliotheque
*/

#include<stdarg.h>

void my_putchar(char c);
void my_putstr(char *str);
void my_putnbr(int nb);
int my_printf(char *str, ...);
void my_putunbr(unsigned int nb);
void my_puthex(int nb);
void my_putoctal(int nb);
void my_putbinary(int nb);
void my_puthex_maj(int nb);
void letter_is_x_maj(va_list start);
void letter_is_d(va_list start);
void letter_is_i(va_list start);
void letter_is_u(va_list start);
void letter_is_s(va_list start);
void letter_is_c(va_list start);
void letter_is_x(va_list start);
void letter_is_o(va_list start);
void letter_is_b(va_list start);