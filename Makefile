##
## EPITECH PROJECT, 2019
## my_defender
## File description:
## makefile
##

SRC	=	create_window.c		\
		main.c			\
		my_putchar.c		\
		my_putstr.c		\
		game_state.c		\
		text.c			\
		text2.c			\
		cursor_change.c		\
		set_cursor.c		\
		create_sprites.c	\
		game_play.c		\
		flower.c		\
		cursor_on_click.c	\
		other_states.c		\
		sound.c			\
		get_cursor.c		\
		get_cannon.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

CFLAGS	=	-g -g3 -ggdb -I ./include \
		-l csfml-graphics -l csfml-audio -l csfml-window \
		-l csfml-system -lm

all:		$(NAME) message

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

message:
		@echo "SUCCESSFULLY COMPILED!"
