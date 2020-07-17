/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_putstr
*/

#include "my.h"

int	my_putstr(char const *str)
{
    int	d = 0;

    if (str != NULL) {
        while (str[d] != '\0') {
            my_putchar(str[d]);
            d++;
        }
    }
    return (0);
}
