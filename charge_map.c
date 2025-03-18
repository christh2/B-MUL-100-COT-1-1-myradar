/*
** EPITECH PROJECT, 2023
** read
** File description:
** read_map
*/

#include "my.h"

int my_strlen(char *str)
{
    size_t i = 0;
    for (; str[i] != '\0'; i++);
    return i;
}

gilles *position(gilles *christ, char **av, int x)
{
    christ[x].pos_depart.x = my_getnbr(av[1]);
    christ[x].pos_depart.y = my_getnbr(av[2]);
    christ[x].pos_finale.x = my_getnbr(av[1]);
    christ[x].pos_finale.y = my_getnbr(av[2]);
    return christ;
}

char **str_array(char *str)
{
    int i = 0, j = 0, x = 0; int lignes = 0;
    lignes = compt_lignes(str);
    int cols = 0; cols = compt_cols(str);
    char **tab = NULL; tab = malloc(sizeof(char *) * (lignes + 1));
    for (i = 0; i < lignes; i++) {
        tab[i] = malloc(sizeof(char) * (cols + 1));
        tab[i][0] = '\0';
        for (x = 0; str[j] != '\0' && x < cols && str[j] != ' '; j++) {
            tab[i][x] = str[j]; x++;
        }
        tab[i][x] = '\0'; j++; x = 0;
    }
    tab[i] = NULL;
    return tab;
}

gilles *table_strct_remply(gilles *christ, char **tab, int x)
{
    christ = position(christ, tab, x);
    if (tab[0][0] == 'A') {
        christ[x].texture = sfTexture_createFromFile("plane.png", NULL);
        christ[x].sprite = sfSprite_create();
        sfSprite_setTexture(christ[x].sprite, christ[x].texture, sfTrue);
        sfVector2f scale = {0.2, 0.2}; sfSprite_setScale(christ[x].sprite,
        scale);
        sfSprite_setPosition(christ[x].sprite, christ[x].pos_depart);
    } else if (tab[0][0] == 'T') {
        christ[x].texture = sfTexture_createFromFile("tower.png", NULL);
        christ[x].sprite = sfSprite_create();
        sfSprite_setTexture(christ[x].sprite, christ[x].texture, sfTrue);
        sfVector2f scale = {0.1, 0.1}; sfSprite_setScale(christ[x].sprite,
        scale);
        sfSprite_setPosition(christ[x].sprite, christ[x].pos_depart);
    }
}

gilles *read_fil(gilles *christ, char **av)
{
    FILE *fp; char **array_2 = NULL;
    char *line = NULL; size_t len = 0; ssize_t read;
    char **save = NULL; int x = 0;
    fp = fopen(av[1], "r");
    while ((read = getline(&line, &len, fp)) != -1) {
        array_2 = str_array(line);
        table_strct_remply(christ, array_2, x);
        x++;
    }
    if (line)
        free(line);
    return christ;
}
