/*
** EPITECH PROJECT, 2019
** my defender
** File description:
** states
*/

#include "my.h"

void	state_three(sfRenderWindow *window, game_t *g)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->s->h, NULL);
    sfRenderWindow_drawSprite(window, g->m->c, NULL);
    sfRenderWindow_drawSprite(window, g->bee, NULL);
}

void	cursor_set(game_t *g, sfEvent event, \
    sfRenderWindow *window)
{
    sfMouseButtonEvent	mouse = event.mouseButton;

    if (event.type == sfEvtMouseButtonReleased) {
        if (g->state == 0) {
            play_click(mouse, g, window);
            click_buttons(mouse, g);
        }
        if (g->state == 5) {
            five_click(mouse, g, window);
            if (mouse.x >= 15 && mouse.x <= 90 && \
    mouse.y >= 15 && mouse.y <= 90)
                g->state = 2;
        }
        if (g->state == 2 || g->state == 3) {
            second_click(mouse, g);
        }
    }
}

void	settings_leave(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (g->state == 2 || g->state == 3) {
        home_button(mousem, g, mouse);
    }
    if (g->state == 2) {
        m_button(mousem, g, mouse);
        v_button(mousem, g, mouse);
    }
}

void	home_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 455 && mousem.x <= 646 && \
    mousem.y >= 600 && mousem.y <= 784)
        g->s->r4.left = 191;
    else if (mouse.x >= 455 && mouse.x <= 645 && \
    mouse.y >= 600 && mouse.y <= 784)
        g->s->r4.left = 382;
    else
        g->s->r4.left = 0;
    sfSprite_setTextureRect(g->s->h, g->s->r4);
}

void	state_five(sfRenderWindow *window, game_t *g)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->m->bg, NULL);
    sfRenderWindow_drawSprite(window, g->m->pause, NULL);
    sfRenderWindow_drawSprite(window, g->b->sb2, NULL);
    sfRenderWindow_drawSprite(window, g->m->play, NULL);
    sfRenderWindow_drawSprite(window, g->m->ins, NULL);
    sfRenderWindow_drawSprite(window, g->m->quit, NULL);
    sfRenderWindow_drawText(window, g->t->text2, NULL);
    sfRenderWindow_drawText(window, g->t->text4, NULL);
    sfRenderWindow_drawText(window, g->t->text5, NULL);
    sfRenderWindow_drawSprite(window, g->bee, NULL);
}
