/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** text2
*/

#include "my.h"

void	home(sett_t *s)
{
    s->minus = sfTexture_createFromFile("assets/minus.png", NULL);
    s->m = sfSprite_create();
    sfSprite_setTexture(s->m, s->minus, sfTrue);
    sfSprite_setPosition(s->m, set_position(5, 200));
    sfSprite_setTextureRect(s->m, s->r1);
    s->ht = sfTexture_createFromFile("assets/home.png", NULL);
    s->h = sfSprite_create();
    sfSprite_setTexture(s->h, s->ht, sfTrue);
    sfSprite_setPosition(s->h, set_position(455, 600));
    sfSprite_setTextureRect(s->h, s->r4);
}

void	color(text_t *t)
{
    t->text6 = sfText_copy(t->text);
    sfText_setString(t->text6, "Press 'S' key to continue!");
    sfText_setFont(t->text6, t->font);
    sfText_setPosition(t->text6, set_position(315, 740));
    sfText_setCharacterSize(t->text6, 45);
    sfText_setColor(t->text6, sfYellow);
}

void	set_text(text_t *t)
{
    color(t);
    t->text3 = sfText_copy(t->text);
    sfText_setString(t->text3, "CREDITS");
    sfText_setFont(t->text3, t->font);
    sfText_setPosition(t->text3, set_position(492, 535));
    sfText_setCharacterSize(t->text3, 25);
    t->text4 = sfText_copy(t->text);
    sfText_setString(t->text4, "RESUME");
    sfText_setFont(t->text4, t->font);
    sfText_setPosition(t->text4, set_position(494, 275));
    sfText_setCharacterSize(t->text4, 25);
    t->text5 = sfText_copy(t->text);
    sfText_setString(t->text5, "MENU");
    sfText_setFont(t->text5, t->font);
    sfText_setPosition(t->text5, set_position(508, 535));
    sfText_setCharacterSize(t->text5, 25);
}
