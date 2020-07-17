/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** my_h
*/

#ifndef	MY_H_
#define MY_H_

#define FPS (75)
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <math.h>

typedef	struct	game
{
    int	state;
    int	d;
    sfTexture	*tb;
    sfSprite	*bee;
    sfIntRect	rect;
    sfClock	*clock;
    sfTime	time;
    float	seconds;
    struct start *st;
    struct menu *m;
    struct text *t;
    struct button *b;
    struct sett *s;
    struct sound *v;
}	game_t;

typedef	struct	start
{
    int	order;
    int	move_length;
    sfTexture	*b;
    sfSprite	*sb;
    sfTexture	*lulet;
    sfSprite	*lule;
    sfSprite	*lule2;
    sfSprite	*lule3;
    sfSprite	*lule4;
    sfSprite	*lule5;
    sfVector2f	position;
    sfClock	*clock;
    sfTime	time;
    float	seconds;
    sfIntRect	rect;
}	start_t;

typedef	struct	sound
{
    unsigned	int	n;
    sfSound	*sound;
    sfSoundBuffer	*sb;
    sfSound	*i;
    sfSoundBuffer	*si;
    sfSound	*m;
    sfSoundBuffer	*mb;
    sfTexture	*cann;
    sfSprite	*can;
}	sound_t;

typedef	struct	sett
{
    sfTexture	*minus;
    sfSprite	*m;
    sfTexture	*plus;
    sfSprite	*p;
    sfTexture	*b;
    sfSprite	*bar1;
    sfTexture	*b2;
    sfSprite	*bar2;
    sfTexture	*ht;
    sfSprite	*h;
    sfIntRect	r1;
    sfIntRect	r2;
    sfIntRect	r3;
    sfIntRect	r4;
}	sett_t;

typedef	struct	button
{
    sfTexture	*bg;
    sfSprite	*sbg;
    sfTexture	*b1;
    sfSprite	*sb1;
    sfTexture	*b2;
    sfSprite	*sb2;
    sfIntRect	rect2;
    sfIntRect	rect;
    sfTexture	*m;
    sfSprite	*mus;
    sfTexture	*v;
    sfSprite	*vol;
    sfIntRect	rect3;
    sfIntRect	rect4;
}	button_t;

typedef	struct	menu
{
    sfTexture	*cre;
    sfSprite	*c;
    int	pos_intro;
    sfTexture	*h;
    sfSprite	*ho;
    sfTexture	*t;
    sfSprite	*p;
    sfTexture	*intro1;
    sfSprite	*intro;
    sfTexture	*b;
    sfSprite	*bs;
    sfTexture	*button;
    sfSprite	*play;
    sfSprite	*ins;
    sfSprite	*quit;
    sfIntRect	rect;
    sfTexture	*a;
    sfSprite	*sa;
    sfTexture	*fon;
    sfSprite	*f;
    sfIntRect	rect2;
    sfIntRect	rect3;
    sfTexture	*pause1;
    sfSprite	*pause;
    sfTexture	*bg1;
    sfSprite	*bg;
}	menu_t;

typedef	struct	text
{
    sfFont	*font;
    sfText	*text;
    sfText	*text2;
    sfText	*text3;
    sfText	*text4;
    sfText	*text5;
    sfText	*text6;
}	text_t;

sfRenderWindow	*create_my_window(unsigned int, \
    unsigned int);
sfVector2f	set_position(int, int);
void	my_putchar(char);
void	display_window(sfRenderWindow *);
void	usage_h(void);
int	my_putstr(char const *);
game_t	*game(void);
menu_t	*menu(void);
text_t	*text(void);
sett_t	*settings(void);
sound_t	*my_sound(void);
button_t	*button(void);
start_t	*starting_game(void);
void	up_animation(start_t *);
void	draw_menu(sfRenderWindow *, game_t *);
void	draw_settings(sfRenderWindow *, game_t *);
void	draw_start(sfRenderWindow *, game_t *);
void	state_five(sfRenderWindow *, game_t *);
void	first_state(game_t *);
void	close_window(sfRenderWindow *, game_t *);
void	set_volume(game_t *, sfEvent);
void	set_rect(sett_t *);
void	home(sett_t *);
void	set_text(text_t *);
void	vol_mus(button_t *);
void	get_menu(menu_t *);
void	intro_game(menu_t *);
void	animation(game_t *);
void	check_sound(game_t *);
void	po_animation(game_t *);
void	game_pause(menu_t *);
void	create_mouse(game_t *);
void	game_intro(sfRenderWindow *, game_t *);
void	state_three(sfRenderWindow *, game_t *);
void	set_rect_button(button_t *);
void	make_move(start_t *, game_t *);
void	get_sound(sound_t *);
void	get_cannon(sound_t *);
void	set_cursor(game_t *, sfEvent);
void	cursor_set(game_t *, sfEvent, sfRenderWindow *);
void	click_buttons(sfMouseButtonEvent, game_t *);
void	second_click(sfMouseButtonEvent, game_t *);
void	get_cursor(game_t *g, sfVector2f p, sfEvent event);
void	five_click(sfMouseButtonEvent, game_t *, \
    sfRenderWindow *);
void	sub_v(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	add_v(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	play_button(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	quit_button(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	settings_leave(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	ins_button(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	home_button(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	play2_button(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	s2_button(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	find_us(sfMouseMoveEvent, game_t *, \
    sfMouseButtonEvent);
void	play_click(sfMouseButtonEvent, game_t *, \
    sfRenderWindow *);

#endif /* MY_H */
