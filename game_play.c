/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** game_play
*/

#include "my.h"

void	honey(menu_t *m)
{
    m->cre = sfTexture_createFromFile("assets/sit.png", NULL);
    m->c = sfSprite_create();
    sfSprite_setTexture(m->c, m->cre, sfTrue);
    sfSprite_setPosition(m->c, set_position(0, 125));
    m->h = sfTexture_createFromFile("assets/honey.png", NULL);
    m->ho = sfSprite_create();
    sfSprite_setTexture(m->ho, m->h, sfTrue);
}

void	intro_game(menu_t *m)
{
    sfVector2f	scale;

    scale.x = 0.8;
    scale.y = 0.8;
    m->pos_intro = 0;
    game_pause(m);
    honey(m);
    m->intro1 = sfTexture_createFromFile("assets/in.png", NULL);
    m->intro = sfSprite_create();
    sfSprite_setTexture(m->intro, m->intro1, sfTrue);
    m->t = sfTexture_createFromFile("assets/x.png", NULL);
    m->p = sfSprite_create();
    sfSprite_setTexture(m->p, m->t, sfTrue);
    sfSprite_setPosition(m->p, set_position(5, 320));
    sfSprite_setScale(m->p, scale);
    m->rect.top = 0;
    m->rect.height = 90;
    m->rect.left = 0;
    m->rect.width = 187;
}

void	game_pause(menu_t *m)
{
    m->pause1 = sfTexture_createFromFile("assets/paused.png", NULL);
    m->pause = sfSprite_create();
    sfSprite_setTexture(m->pause, m->pause1, sfTrue);
    sfSprite_setPosition(m->pause, set_position(271, 25));
    m->bg1 = sfTexture_createFromFile("assets/brow.jpg", NULL);
    m->bg = sfSprite_create();
    sfSprite_setTexture(m->bg, m->bg1, sfTrue);
}

void	start_rect(start_t *s)
{
    s->rect.left = 0;
    s->rect.top = 0;
    s->rect.height = 50;
    s->rect.width = 40;
    s->clock = sfClock_create();
    s->b = sfTexture_createFromFile("assets/hom.png", NULL);
    s->sb = sfSprite_create();
    sfSprite_setTexture(s->sb, s->b, sfTrue);
    sfSprite_setPosition(s->sb, set_position(-75, 0));
    s->lulet = sfTexture_createFromFile("assets/po.png", NULL);
    s->lule = sfSprite_create();
    sfSprite_setTexture(s->lule, s->lulet, sfTrue);
    sfSprite_setPosition(s->lule, set_position(-10, 205));
    sfSprite_setTextureRect(s->lule, s->rect);
}

start_t	*starting_game(void)
{
    start_t	*s = malloc(sizeof(start_t));

    start_rect(s);
    s->lule2 = sfSprite_copy(s->lule);
    sfSprite_setPosition(s->lule2, set_position(1200, 325));
    sfSprite_setTextureRect(s->lule2, s->rect);
    s->lule3 = sfSprite_copy(s->lule);
    sfSprite_setPosition(s->lule3, set_position(1200, 445));
    sfSprite_setTextureRect(s->lule3, s->rect);
    s->lule4 = sfSprite_copy(s->lule);
    sfSprite_setPosition(s->lule4, set_position(1200, 565));
    sfSprite_setTextureRect(s->lule4, s->rect);
    s->lule5 = sfSprite_copy(s->lule);
    sfSprite_setPosition(s->lule5, set_position(1200, 685));
    sfSprite_setTextureRect(s->lule5, s->rect);
    return (s);
}
