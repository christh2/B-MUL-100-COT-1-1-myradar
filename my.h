/*
** EPITECH PROJECT, 2023
** struct
** File description:
** strcute
*/

#ifndef MY_H_
    #define MY_H_
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <math.h>
    #include <stdlib.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Types.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/Window/Event.h>
    #include <SFML/Window.h>
    #include <SFML/Audio/Music.h>
    #include <time.h>

typedef struct plane {
    sfVideoMode video;
    sfRenderWindow *window;
    sfEvent event;
    sfTexture *texture1;
    sfSprite *sprite1;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos_depart;
    sfVector2f pos_finale;
    float vitesse;
    int temps;
    int x;
} gilles;

int my_strlen(char *str);
int compt_lignes(char *buffer);
int compt_cols(char *buffer);
gilles *position(gilles *christ, char **av, int x);
char **str_array(char *str);
gilles *table_strct_remply(gilles *christ, char **table, int x);
gilles *read_fil(gilles *christ, char **av);
int my_getnbr(char const *str);
gilles *declar(gilles *christ);

#endif
