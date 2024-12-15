/*
** EPITECH PROJECT, 2022
** int_to_char.c
** File description:
** int_to_char.c
*/

#include "my.h"

char *int_to_str(int nb)
{
    int len = 0;
    char *str;
    int j = nb;

    for (; j > 0; len++)
        j /= 10;
    str = malloc(sizeof(char *) * (len + 1));
    str[len] = '\0';
    while (len--) {
        str[len] = nb % 10 + '0';
        nb /= 10;
    }
    return (str);
}
