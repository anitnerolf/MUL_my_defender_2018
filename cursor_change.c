/*
** EPITECH PROJECT, 2019
** mu_runner
** File description:
** cursor
*/

#include "my.h"

void	play_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 458 && mousem.x <= 645 && \
    mousem.y >= 250 && mousem.y <= 340)
        g->m->rect.left = 187;
    else if (mouse.x >= 458 && mouse.x <= 645 && \
    mouse.y >= 250 && mouse.y <= 340)
        g->m->rect.left = 374;
    else
        g->m->rect.left = 0;
    sfSprite_setTextureRect(g->m->play, g->m->rect);
}

void	quit_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 458 && mousem.x <= 645 && \
    mousem.y >= 380 && mousem.y <= 470)
        g->m->rect.left = 187;
    else if (mouse.x >= 458 && mouse.x <= 645 && \
    mouse.y >= 380 && mouse.y <= 470)
        g->m->rect.left = 374;
    else
        g->m->rect.left = 0;
    sfSprite_setTextureRect(g->m->quit, g->m->rect);
}

void	ins_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 458 && mousem.x <= 645 && \
    mousem.y >= 510 && mousem.y <= 600)
        g->m->rect.left = 187;
    else if (mouse.x >= 458 && mouse.x <= 645 && \
    mouse.y >= 510 && mouse.y <= 600)
        g->m->rect.left = 374;
    else
        g->m->rect.left = 0;
    sfSprite_setTextureRect(g->m->ins, g->m->rect);
}

void	play2_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 475 && mousem.x <= 625 && \
    mousem.y >= 630 && mousem.y <= 780)
        g->b->rect.left = 150;
    else if (mouse.x >= 475 && mouse.x <= 625 && \
    mouse.y >= 630 && mouse.y <= 780)
        g->b->rect.left = 300;
    else
        g->b->rect.left = 0;
    sfSprite_setTextureRect(g->b->sb1, g->b->rect);
}

void	s2_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 15 && mousem.x <= 90 && \
    mousem.y >= 15 && mousem.y <= 90)
        g->b->rect2.left = 80;
    else if (mouse.x >= 15 && mouse.x <= 90 && \
    mouse.y >= 15 && mouse.y <= 90)
        g->b->rect2.left = 160;
    else
        g->b->rect2.left = 0;
    sfSprite_setTextureRect(g->b->sb2, g->b->rect2);
}
