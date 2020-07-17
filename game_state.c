/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** state
*/

#include "my.h"

void	game_intro(sfRenderWindow *window, game_t *g)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->m->intro, NULL);
    sfRenderWindow_drawText(window, g->t->text6, NULL);
    sfRenderWindow_drawSprite(window, g->m->p, NULL);
    sfRenderWindow_drawSprite(window, g->m->ho, NULL);
    sfRenderWindow_drawSprite(window, g->bee, NULL);
}

void	draw_menu(sfRenderWindow *window, game_t *g)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->m->bs, NULL);
    sfRenderWindow_drawSprite(window, g->m->play, NULL);
    sfRenderWindow_drawSprite(window, g->m->ins, NULL);
    sfRenderWindow_drawSprite(window, g->m->quit, NULL);
    sfRenderWindow_drawSprite(window, g->b->sb2, NULL);
    sfRenderWindow_drawSprite(window, g->b->sb1, NULL);
    sfRenderWindow_drawSprite(window, g->m->sa, NULL);
    sfRenderWindow_drawText(window, g->t->text, NULL);
    sfRenderWindow_drawText(window, g->t->text2, NULL);
    sfRenderWindow_drawText(window, g->t->text3, NULL);
    sfRenderWindow_drawSprite(window, g->m->f, NULL);
    sfRenderWindow_drawSprite(window, g->bee, NULL);
}

void	draw_settings(sfRenderWindow *window, game_t *g)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->b->sbg, NULL);
    sfRenderWindow_drawSprite(window, g->s->m, NULL);
    sfRenderWindow_drawSprite(window, g->s->p, NULL);
    sfRenderWindow_drawSprite(window, g->s->bar1, NULL);
    sfRenderWindow_drawSprite(window, g->s->bar2, NULL);
    sfRenderWindow_drawSprite(window, g->b->vol, NULL);
    sfRenderWindow_drawSprite(window, g->b->mus, NULL);
    sfRenderWindow_drawSprite(window, g->s->h, NULL);
    sfRenderWindow_drawSprite(window, g->bee, NULL);
}

void	draw_start(sfRenderWindow *window, game_t *g)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, g->st->sb, NULL);
    sfRenderWindow_drawSprite(window, g->st->lule, NULL);
    sfRenderWindow_drawSprite(window, g->st->lule2, NULL);
    sfRenderWindow_drawSprite(window, g->st->lule3, NULL);
    sfRenderWindow_drawSprite(window, g->st->lule4, NULL);
    sfRenderWindow_drawSprite(window, g->st->lule5, NULL);
    sfRenderWindow_drawSprite(window, g->v->can, NULL);
    sfRenderWindow_drawSprite(window, g->bee, NULL);
}

game_t	*game(void)
{
    game_t	*g = malloc(sizeof(game_t));

    g->d = 0;
    g->state = -1;
    g->clock = sfClock_create();
    g->m = menu();
    g->t = text();
    g->b = button();
    g->s = settings();
    g->v = my_sound();
    g->st = starting_game();
    create_mouse(g);
    return (g);
}
