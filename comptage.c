/*
** EPITECH PROJECT, 2023
** compte
** File description:
** ligne_colonne
*/

#include "my.h"

int compt_lignes(char *buffer)
{
    int i = 0;
    int j = 0;
    for (; buffer[i] != '\0'; i++){
        if (buffer[i] == ' ')
            j++;
    }
    return j;
}

int compt_cols(char *buffer)
{
    my_strlen(buffer);
}
