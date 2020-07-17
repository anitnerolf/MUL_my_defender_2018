/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** sprites
*/

#include "my.h"

void	vol_mus(button_t *b)
{
    b->v = sfTexture_createFromFile("assets/vol.png", NULL);
    b->vol = sfSprite_create();
    sfSprite_setTexture(b->vol, b->v, sfTrue);
    sfSprite_setPosition(b->vol, set_position(25, 25));
    sfSprite_setTextureRect(b->vol, b->rect3);
    b->m = sfTexture_createFromFile("assets/mus.png", NULL);
    b->mus = sfSprite_create();
    sfSprite_setTexture(b->mus, b->m, sfTrue);
    sfSprite_setPosition(b->mus, set_position(120, 25));
    sfSprite_setTextureRect(b->mus, b->rect4);
}

void	set_rect_button(button_t *b)
{
    b->rect.top = 0;
    b->rect.left = 0;
    b->rect.width = 150;
    b->rect.height = 150;
    b->rect2.top = 0;
    b->rect2.left = 0;
    b->rect2.width = 80;
    b->rect2.height = 75;
    b->rect3.top = 0;
    b->rect3.left = 0;
    b->rect3.width = 77;
    b->rect3.height = 75;
    b->rect4.top = 0;
    b->rect4.left = 0;
    b->rect4.width = 77;
    b->rect4.height = 75;
    b->bg = sfTexture_createFromFile("assets/blue.png", NULL);
    b->sbg = sfSprite_create();
    sfSprite_setTexture(b->sbg, b->bg, sfTrue);
}

button_t	*button(void)
{
    button_t	*b = malloc(sizeof(button_t));

    set_rect_button(b);
    vol_mus(b);
    b->b1 = sfTexture_createFromFile("assets/play_button.png", NULL);
    b->sb1 = sfSprite_create();
    sfSprite_setTexture(b->sb1, b->b1, sfTrue);
    sfSprite_setPosition(b->sb1, set_position(475, 630));
    sfSprite_setTextureRect(b->sb1, b->rect);
    b->b2 = sfTexture_createFromFile("assets/settings.png", NULL);
    b->sb2 = sfSprite_create();
    sfSprite_setTexture(b->sb2, b->b2, sfTrue);
    sfSprite_setPosition(b->sb2, set_position(15, 15));
    sfSprite_setTextureRect(b->sb2, b->rect2);
    return (b);
}

void	get_menu(menu_t *m)
{
    m->rect2.top = 0;
    m->rect2.height = 75;
    m->rect2.left = 0;
    m->rect2.width = 75;
    m->rect3.top = 0;
    m->rect3.height = 410;
    m->rect3.left = 600;
    m->rect3.width = 600;
    m->a = sfTexture_createFromFile("assets/about.png", NULL);
    m->sa = sfSprite_create();
    sfSprite_setTexture(m->sa, m->a, sfTrue);
    sfSprite_setPosition(m->sa, set_position(1005, 15));
    sfSprite_setTextureRect(m->sa, m->rect2);
    m->fon = sfTexture_createFromFile("assets/findon.png", NULL);
    m->f = sfSprite_create();
    sfSprite_setTexture(m->f, m->fon, sfTrue);
    sfSprite_setPosition(m->f, set_position(250, 220));
    sfSprite_setTextureRect(m->f, m->rect3);
}

menu_t	*menu(void)
{
    menu_t	*m = malloc(sizeof(menu_t));

    intro_game(m);
    get_menu(m);
    m->b = sfTexture_createFromFile("assets/pooh.jpg", NULL);
    m->bs = sfSprite_create();
    sfSprite_setTexture(m->bs, m->b, sfTrue);
    m->button = sfTexture_createFromFile("assets/play.png", NULL);
    m->play = sfSprite_create();
    sfSprite_setTexture(m->play, m->button, sfTrue);
    sfSprite_setPosition(m->play, set_position(458, 250));
    sfSprite_setTextureRect(m->play, m->rect);
    m->quit = sfSprite_copy(m->play);
    sfSprite_setPosition(m->quit, set_position(458, 380));
    m->ins = sfSprite_copy(m->play);
    sfSprite_setPosition(m->ins, set_position(458, 510));
    return (m);
}
