/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** main
*/

#include "my.h"

int	main(int ac, char **av)
{
    sfRenderWindow	*window;

    if (ac == 1) {
        window = create_my_window(1100, 800);
        sfRenderWindow_setFramerateLimit(window, FPS);
        display_window(window);
    } else if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && !av[1][2]) {
        usage_h();
    } else
        return (84);
    return (0);
}

void	usage_h(void)
{
    my_putstr("USAGE\n");
    my_putstr("\n\t./mydefender - to launch the game.\n");
    my_putstr("\n\t./mydefender -h - usage option.\n");
    my_putstr("\nRead how to play menu!\n");
}

void	states(sfRenderWindow *window, game_t *g)
{
    if (g->state == -1) {
        game_intro(window, g);
        first_state(g);
    }
    if (g->state == 0) {
        draw_menu(window, g);
    }
    if (g->state == 1) {
        sfRenderWindow_clear(window, sfBlack);
    }
}

void	game_state(sfRenderWindow *window, game_t *g)
{
    states(window, g);
    switch (g->state) {
    case (2):
        draw_settings(window, g);
        break;
    case (3):
        state_three(window, g);
        break;
    case (4):
        draw_start(window, g);
        up_animation(g->st);
        make_move(g->st, g);
        break;
    case (5):
        state_five(window, g);
        break;
    }
}

void	display_window(sfRenderWindow *window)
{
    game_t	*g = malloc(sizeof(game_t));

    g = game();
    while (sfRenderWindow_isOpen(window)) {
        close_window(window, g);
        animation(g);
        game_state(window, g);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    sfSound_destroy(g->v->sound);
    sfSound_destroy(g->v->i);
    sfSound_destroy(g->v->m);
}
