/*
** EPITECH PROJECT, 2023
** strlen
** File description:
** strlen
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;
    for (; str[i] != '\n'; i++);
    return i;
}
