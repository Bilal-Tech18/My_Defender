/*
** EPITECH PROJECT, 2022
** init_rect.c
** File description:
** init_rect
*/

#include "my.h"

void init_rect(game_t *game)
{
    init_rect_one(game);
    init_rect_two(game);
}

void init_rect_one(game_t *game)
{
    game->rect.square_one = (sfIntRect){0, 0, 1000, 1000};
    game->rect.square_two = (sfIntRect){0, 0, 1000, 1000};
    game->rect.square_tree = (sfIntRect){0, 0, 1000, 1000};
    game->rect.square_four = (sfIntRect){0, 0, 1000, 1000};
    game->rect.fox_i = (sfIntRect){0, 0, 228, 129};
    game->rect.tower_magic = (sfIntRect){0, 0, 256, 502};
    game->rect.tower_magic_i = (sfIntRect){0, 0, 256, 502};
    game->rect.tower_can = (sfIntRect){0, 0, 250, 500};
    game->rect.tower_crossbow = (sfIntRect){0, 0, 250, 500};
    game->rect.tower_can_i = (sfIntRect){0, 0, 250, 500};
    game->rect.tower_crossbow_i = (sfIntRect){0, 0, 250, 500};
    game->rect.life_bar = (sfIntRect){0, 0, 512, 256};
    game->rect.start = (sfIntRect){0, 0, 536, 532};
    game->rect.board = (sfIntRect){0, 0, 404, 269};
    game->rect.coin = (sfIntRect){0, 0, 800, 600};
    game->rect.button_pause = (sfIntRect){0, 0, 63, 63};
    game->rect.button_exit = (sfIntRect){0, 0, 62, 63};
    game->rect.enemy_wildbord = (sfIntRect){0, 0, 245, 167};
    game->rect.enemy_rathian = (sfIntRect){0, 0, 512, 512};
}

void init_rect_two(game_t *game)
{
    game->rect.enemy_diablos = (sfIntRect){0, 0, 487, 259};
    game->rect.defender_fox = (sfIntRect){0, 0, 228, 129};
    game->rect.tower_can_two = (sfIntRect){0, 0, 252, 504};
    game->rect.tower_can_two_i = (sfIntRect){0, 0, 252, 504};
    game->rect.win = (sfIntRect){0, 0, 480, 480};
    game->rect.game_over = (sfIntRect){0, 0, 700, 500};
}
