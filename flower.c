/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** flower
*/

#include "my.h"

void	up_animation(start_t *s)
{
    s->time = sfClock_getElapsedTime(s->clock);
    s->seconds = s->time.microseconds / 50000.0;
    if (s->seconds > 1.5) {
        if (s->rect.left == 320)
            s->rect.left = 0;
        else
            s->rect.left = s->rect.left + 40;
        s->rect.top = 100;
        sfSprite_setTextureRect(s->lule, s->rect);
        s->rect.top = 50;
        sfSprite_setTextureRect(s->lule2, s->rect);
        s->rect.top = 150;
        sfSprite_setTextureRect(s->lule3, s->rect);
        s->rect.top = 100;
        sfSprite_setTextureRect(s->lule4, s->rect);
        sfClock_restart(s->clock);
    }
}

void	manage_move(start_t *s)
{
    s->move_length = 1;
    s->move_length++;
    if (s->order == 0)
        s->position.x -= s->move_length * 0.45;
}

void	make_move(start_t *s, game_t *g)
{
    const	int	screen_width = 1500;

    if (s->position.x >= screen_width) {
        s->position.x = screen_width;
        s->order = 0;
    } else if (s->position.x < 800) {
        s->position.x = s->position.x;
        s->rect.top = 150;
        sfSprite_setTextureRect(s->lule, s->rect);
        s->position.y++;
        s->order = 1;
    }
    manage_move(s);
    sfSprite_setPosition(s->lule, set_position(520, s->position.y));
    if (g->st->position.y == 235)
        g->d = 1;
    if (g->d == 1)
        s->position.y = 236;
}
