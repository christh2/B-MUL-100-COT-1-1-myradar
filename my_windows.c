/*
** EPITECH PROJECT, 2022
** windows
** File description:
** windows
*/

#include "my.h"

void move_rect(sfIntRect *rect, int offset, int max)
{
    if (rect->left == max - offset) {
        rect->left = 0;
    } else {
        rect->left = rect->left + offset;
    }
}

int table_struct(char *file)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read; int x = 1;
    if (fp == NULL) return 84;
    fp = fopen(file, "r");
    if (fp == NULL) exit(EXIT_FAILURE);
    while ((read = getline(&line, &len, fp)) != -1) {
        x++;
    }
    return x;
}

gilles *declar(gilles *christ)
{
    sfVideoMode mode = {1920, 1080, 32};
    christ = malloc(sizeof(gilles));
    sfEvent event;
    christ->window; sfVideoMode video_mode;
    christ->texture1 = sfTexture_createFromFile("mapradar.jpg", NULL);
    christ->sprite1 = sfSprite_create();
    sfSprite_setTexture(christ->sprite1, christ->texture1, sfTrue);
    christ->window = sfRenderWindow_create(mode,
    "Mywindow", sfDefaultStyle, NULL);
    return christ;
}

int main(int ac, char **av)
{
    int x = table_struct(av[1]);
    gilles *script = malloc(sizeof(gilles) * (x));
    gilles *christ = declar(christ); script = read_fil(script, av);
    while (sfRenderWindow_isOpen(christ->window)) {
        while (sfRenderWindow_pollEvent(christ->window,
                                        &(christ->event))) {
            (christ->event.type == sfEvtClosed) ?
                sfRenderWindow_close(christ->window) : 0;
            (christ->event.type == sfEvtKeyPressed &&
                christ->event.key.code == sfKeyEscape) ?
                sfRenderWindow_close(christ->window) : 0;
        } sfRenderWindow_clear(christ->window, sfBlack);
        sfRenderWindow_drawSprite(christ->window, christ->sprite1, NULL);
        for (int i = 0; i < x - 1; i++) {
            sfRenderWindow_drawSprite(christ->window, script[i].sprite, NULL);
        } sfRenderWindow_display(christ->window);
    } sfRenderWindow_destroy(christ->window); free(script); return (0);
}
