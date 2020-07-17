/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** cursor
*/

#include "my.h"

void	set_cursor(game_t *g, sfEvent event)
{
    sfMouseMoveEvent	mousem = event.mouseMove;
    sfMouseButtonEvent	mouse = event.mouseButton;

    if (event.type == sfEvtMouseMoved || \
    event.type == sfEvtMouseButtonPressed) {
        settings_leave(mousem, g, mouse);
        if (g->state == 0) {
            play2_button(mousem, g, mouse);
            find_us(mousem, g, mouse);
        }
        if (g->state == 0 || g->state == 5) {
            s2_button(mousem, g, mouse);
            play_button(mousem, g, mouse);
            quit_button(mousem, g, mouse);
            ins_button(mousem, g, mouse);
        }
    }
}

void	set_volume(game_t *g, sfEvent event)
{
    sfMouseMoveEvent	mousem = event.mouseMove;
    sfMouseButtonEvent	mouse = event.mouseButton;

    if ((event.type == sfEvtMouseMoved || \
    event.type == sfEvtMouseButtonPressed) && \
    g->state == 2) {
        add_v(mousem, g, mouse);
        sub_v(mousem, g, mouse);
    }
}

void	add_v(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 370 && mousem.x <= 420 && \
    mousem.y >= 200 && mousem.y <= 249)
        g->s->r2.left = 50;
    else if (mouse.x >= 370 && mouse.x <= 420 && \
    mouse.y >= 200 && mouse.y <= 249) {
        g->s->r2.left = 100;
        g->s->r3.width += 8;
        g->v->n++;
        sfSprite_setTextureRect(g->s->bar2, g->s->r3);
        sfSound_setVolume(g->v->sound, g->v->n);
    } else
        g->s->r2.left = 0;
    sfSprite_setTextureRect(g->s->p, g->s->r2);
}

void	sub_v(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 5 && mousem.x <= 55 && \
    mousem.y >= 200 && mousem.y <= 249)
        g->s->r1.left = 50;
    else if (mouse.x >= 5 && mouse.x <= 55 && \
    mouse.y >= 200 && mouse.y <= 249) {
        g->s->r1.left = 100;
        g->s->r3.width -= 8;
        g->v->n--;
        sfSprite_setTextureRect(g->s->bar2, g->s->r3);
        sfSound_setVolume(g->v->sound, g->v->n);
    } else
        g->s->r1.left = 0;
    sfSprite_setTextureRect(g->s->m, g->s->r1);
}

void	find_us(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 1005 && mousem.x <= 1080 && \
    mousem.y >= 15 && mousem.y <= 90)
        g->m->rect2.left = 75;
    else if (mouse.x >= 1005 && mouse.x <= 1080 && \
    mouse.y >= 15 && mouse.y <= 90) {
        g->m->rect2.left = 150;
        g->m->rect3.left = 0;
    } else {
        g->m->rect2.left = 0;
        g->m->rect3.left = 600;
    }
    sfSprite_setTextureRect(g->m->f, g->m->rect3);
    sfSprite_setTextureRect(g->m->sa, g->m->rect2);
}
