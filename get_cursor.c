/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** cursor
*/

#include "my.h"

void	get_cursor(game_t *g, sfVector2f p, sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        sfSprite_setPosition(g->bee, p);
    }
}

void	create_mouse(game_t *g)
{
    sfVector2f	scale;

    scale.x = 0.3;
    scale.y = 0.3;
    g->rect.left = 0;
    g->rect.top = 0;
    g->rect.height = 198;
    g->rect.width = 309;
    g->tb = sfTexture_createFromFile("assets/bees.png", NULL);
    g->bee = sfSprite_create();
    sfSprite_setTexture(g->bee, g->tb, sfTrue);
    sfSprite_setTextureRect(g->bee, g->rect);
    sfSprite_setScale(g->bee, scale);
}

void	animation(game_t *x)
{
    x->time = sfClock_getElapsedTime(x->clock);
    x->seconds = x->time.microseconds / 500000.0;
    if (x->seconds > 0.07) {
        if (x->rect.left == 2781) {
            x->rect.left = 0;
        } else
            x->rect.left = x->rect.left + 309;
        sfSprite_setTextureRect(x->bee, x->rect);
        sfClock_restart(x->clock);
    }
}
