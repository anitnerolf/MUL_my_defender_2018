/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** window
*/

#include "my.h"

sfRenderWindow	*create_my_window(unsigned int width, \
    unsigned int height)
{
    sfRenderWindow	*window;
    sfVideoMode	video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My Defender", \
    sfClose, NULL);
    return (window);
}

void	first_state(game_t *g)
{
    if (g->state == -1) {
        g->m->pos_intro--;
        sfSprite_setPosition(g->m->intro, \
    set_position(0, g->m->pos_intro));
    }
    if (g->m->pos_intro == -520) {
        g->m->pos_intro++;
    }
}

void	state_four(sfEvent event, game_t *g)
{
    if (g->state == 4) {
        if (event.type == sfEvtKeyPressed && \
    event.key.code == sfKeyEscape)
            g->state = 5;
    }
}

void	click_sound(game_t *g, sfEvent event, \
    sfRenderWindow *window)
{
    if (event.type == sfEvtMouseButtonPressed)
        sfSound_play(g->v->m);
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (g->state == -1) {
        if (event.type == sfEvtKeyPressed && \
    event.key.code == sfKeyS) {
            g->state = 0;
            sfSound_pause(g->v->i);
        }
    }
}

void	close_window(sfRenderWindow *window, game_t *g)
{
    sfEvent	event;
    sfVector2f	position;
    sfMouseMoveEvent	move_mouse;

    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    while (sfRenderWindow_pollEvent(window, &event)) {
        check_sound(g);
        click_sound(g, event, window);
        move_mouse = event.mouseMove;
        position.x = move_mouse.x - 35;
        position.y = move_mouse.y - 35;
        get_cursor(g, position, event);
        state_four(event, g);
        rotate_cannon(g, move_mouse);
        set_cursor(g, event);
        cursor_set(g, event, window);
        set_volume(g, event);
    }
}
