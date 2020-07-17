/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** text
*/

#include "my.h"

sfVector2f	set_position(int x, int y)
{
    sfVector2f	position;

    position.x = x;
    position.y = y;
    return (position);
}

text_t	*text(void)
{
    text_t	*t = malloc(sizeof(text_t));

    t->font = sfFont_createFromFile("text/rw.ttf");
    t->text = sfText_create();
    sfText_setString(t->text, "OPTIONS");
    sfText_setFont(t->text, t->font);
    sfText_setColor(t->text, sfBlack);
    sfText_setPosition(t->text, set_position(490, 275));
    sfText_setCharacterSize(t->text, 25);
    t->text2 = sfText_copy(t->text);
    sfText_setString(t->text2, "QUIT");
    sfText_setFont(t->text2, t->font);
    sfText_setPosition(t->text2, set_position(514, 405));
    sfText_setCharacterSize(t->text2, 25);
    set_text(t);
    return (t);
}

void	set_rect(sett_t *s)
{
    s->r1.left = 0;
    s->r1.top = 0;
    s->r1.height = 49;
    s->r1.width = 50;
    s->r2.left = 0;
    s->r2.top = 0;
    s->r2.height = 49;
    s->r2.width = 50;
    s->r3.left = 0;
    s->r3.top = 0;
    s->r3.height = 45;
    s->r3.width = 80;
    s->r4.left = 0;
    s->r4.top = 0;
    s->r4.height = 184;
    s->r4.width = 191;
    s->b = sfTexture_createFromFile("assets/bar1.png", NULL);
    s->bar1 = sfSprite_create();
    sfSprite_setTexture(s->bar1, s->b, sfTrue);
    sfSprite_setPosition(s->bar1, set_position(55, 200));
}

sett_t	*settings(void)
{
    sett_t	*s = malloc(sizeof(sett_t));

    set_rect(s);
    home(s);
    s->plus = sfTexture_createFromFile("assets/plus.png", NULL);
    s->p = sfSprite_create();
    sfSprite_setTexture(s->p, s->plus, sfTrue);
    sfSprite_setPosition(s->p, set_position(370, 200));
    sfSprite_setTextureRect(s->p, s->r2);
    s->b2 = sfTexture_createFromFile("assets/bar2.png", NULL);
    s->bar2 = sfSprite_create();
    sfSprite_setTexture(s->bar2, s->b2, sfTrue);
    sfSprite_setPosition(s->bar2, set_position(60, 200));
    sfSprite_setTextureRect(s->bar2, s->r3);
    return (s);
}

sound_t	*my_sound(void)
{
    sound_t	*v = malloc(sizeof(sound_t));

    v->n = 10;
    get_sound(v);
    get_cannon(v);
    v->sb = sfSoundBuffer_createFromFile("s.wav");
    v->sound = sfSound_create();
    sfSound_setBuffer(v->sound, v->sb);
    sfSound_setLoop(v->sound, sfTrue);
    sfSound_setVolume(v->sound, v->n);
    sfSound_play(v->sound);
    v->si = sfSoundBuffer_createFromFile("intro.wav");
    v->i = sfSound_create();
    sfSound_setBuffer(v->i, v->si);
    sfSound_play(v->i);
    sfSound_setLoop(v->i, sfTrue);
    sfSound_setVolume(v->i, 25);
    return (v);
}
