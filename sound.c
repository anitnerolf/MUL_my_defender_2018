/*
** EPITECH PROJECT, 2019
** sdfg
** File description:
** sdfgh
*/

#include "my.h"

void	rotate_cannon(game_t *g, sfMouseMoveEvent mouse)
{
    sfVector2f	currentPosition = sfSprite_getPosition(g->v->can);
    float	a = currentPosition.x - mouse.x;
    float	b = currentPosition.y - mouse.y;
    float	rotation = (atan2(b, a));
    const	float PI = 3.14159265;

    rotation = (rotation * 180) / PI + 90;
    rotation = 360 - (-rotation);
    sfSprite_setRotation(g->v->can, rotation);
}

void	get_sound(sound_t *v)
{
    v->mb = sfSoundBuffer_createFromFile("c.wav");
    v->m = sfSound_create();
    sfSound_setBuffer(v->m, v->mb);
    sfSound_setVolume(v->m, 50);
}

void	m_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 120 && mousem.x <= 197 && \
    mousem.y >= 25 && mousem.y <= 100)
        g->b->rect4.left = 77;
    else if (mouse.x >= 120 && mouse.x <= 197 && \
    mouse.y >= 25 && mouse.y <= 100) {
        g->b->rect4.left = 154;
        if (sfSound_getStatus(g->v->sound) == sfPlaying)
            sfSound_pause(g->v->sound);
        else
            sfSound_play(g->v->sound);
    } else
        g->b->rect4.left = 0;
    sfSprite_setTextureRect(g->b->mus, g->b->rect4);
}


void	v_button(sfMouseMoveEvent mousem, game_t *g, \
    sfMouseButtonEvent mouse)
{
    if (mousem.x >= 25 && mousem.x <= 102 && \
    mousem.y >= 25 && mousem.y <= 100)
        g->b->rect3.left = 77;
    else if (mouse.x >= 25 && mouse.x <= 102 && \
    mouse.y >= 25 && mouse.y <= 100) {
        g->b->rect3.left = 154;
        if (sfSound_getStatus(g->v->m) == sfPlaying)
            sfSound_pause(g->v->m);
        else
            sfSound_play(g->v->m);
    } else
        g->b->rect3.left = 0;
    sfSprite_setTextureRect(g->b->vol, g->b->rect3);
}
