/*
** EPITECH PROJECT, 2022
** init_position.c
** File description:
** init_position
*/

#include "my.h"

void init_positions(game_t *game)
{
    init_positions_one(game);
    init_positions_two(game);
}

void init_positions_one(game_t *game)
{
    game->pos.square_one = (sfVector2f){287, 205};
    game->pos.square_two = (sfVector2f){287, 485};
    game->pos.square_tree = (sfVector2f){800, 205};
    game->pos.square_four = (sfVector2f){800, 485};
    game->pos.fox_i = (sfVector2f){1022, 330};
    game->pos.tower_can = (sfVector2f){3000, 3000};
    game->pos.tower_crossbow = (sfVector2f){3000, 3000};
    game->pos.tower_can_i = (sfVector2f){3000, 3000};
    game->pos.tower_crossbow_i = (sfVector2f){3000, 3000};
    game->pos.life_bar = (sfVector2f){450, -20};
    game->pos.start = (sfVector2f){370, 10};
    game->pos.coin = (sfVector2f){-20, -70};
    game->pos.button_pause_menu = (sfVector2f){700, 460};
    game->pos.board = (sfVector2f){450, 300};
    game->pos.button_pause = (sfVector2f){1125, 10};
    game->pos.button_exit = (sfVector2f){1160, 10};
    game->pos.enemy_wildbord = (sfVector2f){-150, 70};
    game->pos.enemy_rathian = (sfVector2f){-1000, 170};
    game->pos.enemy_diablos = (sfVector2f){-200, 540};
    game->pos.defender_fox = (sfVector2f){5000, 5000};
}

void init_positions_two(game_t *game)
{
    game->pos.tower_magic = (sfVector2f){3000, 3000};
    game->pos.tower_magic_i = (sfVector2f){3000, 3000};
    game->pos.tower_can_two = (sfVector2f){3000, 3000};
    game->pos.tower_can_two_i = (sfVector2f){3000, 3000};
    game->pos.fox = (sfVector2f){1022, 330};
    game->pos.win = (sfVector2f){-100, 0};
    game->pos.game_over = (sfVector2f){380, 200};
}

void init_pos_tower_i(game_t *game)
{
    game->pos.tower_can_two_i = (sfVector2f){1500, 1500};
    game->pos.tower_magic_i = (sfVector2f){1500, 1500};
    game->pos.tower_can_i = (sfVector2f){1500, 1500};
    game->pos.tower_can_two_i = (sfVector2f){1500, 1500};
    game->pos.tower_crossbow_i = (sfVector2f){1500, 1500};
}
