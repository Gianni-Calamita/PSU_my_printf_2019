/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** retourne le nombre de caractere d'une string
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}