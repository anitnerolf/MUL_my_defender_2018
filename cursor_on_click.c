/*
** EPITECH PROJECT, 2019
** sdfgh
** File description:
** asdfgh
*/

#include "my.h"

void	check_sound(game_t *g)
{
    if (g->state != -1 && g->state != 3)
        sfSound_pause(g->v->i);
    if (g->state == 3 || g->state == -1)
        sfSound_pause(g->v->sound);
    else {
        if (sfSound_getStatus(g->v->sound) == sfPaused)
            sfSound_play(g->v->sound);
    }
}

void	click_buttons(sfMouseButtonEvent mouse, game_t *g)
{
    if (mouse.x >= 15 && mouse.x <= 90 && \
    mouse.y >= 15 && mouse.y <= 90) {
        g->state = 2;
    }
    if (mouse.x >= 475 && mouse.x <= 625 && \
    mouse.y >= 630 && mouse.y <= 780) {
        g->state = 4;
    }
    if (mouse.x >= 1005 && mouse.x <= 1080 && \
    mouse.y >= 15 && mouse.y <= 90) {
        g->m->rect3.left = 600;
    }
    sfSprite_setTextureRect(g->m->f, g->m->rect3);
}

void	play_click(sfMouseButtonEvent mouse, game_t *g, \
    sfRenderWindow *window)
{
    if (mouse.x >= 458 && mouse.x <= 645 && \
    mouse.y >= 250 && mouse.y <= 340)
        g->state = 1;
    if (mouse.x >= 458 && mouse.x <= 645 && \
    mouse.y >= 380 && mouse.y <= 470)
        sfRenderWindow_close(window);
    if (mouse.x >= 458 && mouse.x <= 645 && \
    mouse.y >= 510 && mouse.y <= 600) {
        g->state = 3;
        sfSound_play(g->v->i);
    }
}

void	five_click(sfMouseButtonEvent mouse, game_t *g, \
    sfRenderWindow *window)
{
    if (mouse.x >= 458 && mouse.x <= 645 && \
    mouse.y >= 250 && mouse.y <= 340)
        g->state = 4;
    if (mouse.x >= 458 && mouse.x <= 645 && \
    mouse.y >= 380 && mouse.y <= 470)
        sfRenderWindow_close(window);
    if (mouse.x >= 458 && mouse.x <= 645 && \
    mouse.y >= 510 && mouse.y <= 600)
        g->state = 0;
}

void	second_click(sfMouseButtonEvent mouse, game_t *g)
{
    if (mouse.x >= 455 && mouse.x <= 646 && \
    mouse.y >= 600 && mouse.y <= 784)
        g->state = 0;
}
