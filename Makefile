##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC		=		sources/main.c \
				sources/analyse_event.c \
				sources/wallpaper.c \
				sources/wild_bord.c \
				sources/create_sprite.c \
				sources/draw_all.c \
				sources/animated_the_sprites.c \
				sources/green_dragon.c \
				sources/brown_dragon.c \
				sources/set_texture.c \
				sources/fox.c \
				sources/basic_function.c \
				sources/initialise_variable.c \
				sources/my_menu.c \
				sources/all_button.c \
				sources/int_to_char.c \
				sources/create_text.c \
				sources/set_position.c \
				sources/set_scale.c \
				sources/init_position.c \
				sources/init_scale.c \
				sources/init_rect.c \
				sources/destroy_all.c \
				sources/tower_one.c \
				sources/conditions_in_game.c \
				sources/conditions_tower.c \
				sources/conditions_tower_two.c \
				sources/conditions_tower_tree.c \
				sources/tower_attack.c \

OBJ     =       $(SRC:.c=.o)

NAME    =       my_defender

TEST_NAME	=	unit_tests

CFLAGS	=	-I./include -g3

all:    $(NAME)

$(NAME):        $(OBJ)
	gcc -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-audio -l \
	csfml-system -l csfml-window $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
