/*
** EPITECH PROJECT, 2019
** dfghj
** File description:
** dfgh
*/

#include "my.h"

void	get_cannon(sound_t *v)
{
    v->cann = sfTexture_createFromFile("assets/cannon.png", NULL);
    v->can = sfSprite_create();
    sfSprite_setTexture(v->can, v->cann, sfTrue);
    sfSprite_setPosition(v->can, set_position(500, 400));
}
