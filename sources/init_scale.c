/*
** EPITECH PROJECT, 2022
** init_scale.c
** File description:
** init the scale
*/

#include "my.h"

void init_scale(game_t *game)
{
    init_scale_one(game);
    init_scale_two(game);
}

void init_scale_one(game_t *game)
{
    game->scale.square_one = (sfVector2f){0.1, 0.1};
    game->scale.square_two = (sfVector2f){0.1, 0.1};
    game->scale.square_tree = (sfVector2f){0.1, 0.1};
    game->scale.square_four = (sfVector2f){0.1, 0.1};
    game->scale.fox_i = (sfVector2f){0.8, 0.8};
    game->scale.tower_magic = (sfVector2f){0.3, 0.3};
    game->scale.tower_magic_i = (sfVector2f){0.1, 0.1};
    game->scale.tower_can = (sfVector2f){0.3, 0.3};
    game->scale.tower_crossbow = (sfVector2f){0.3, 0.3};
    game->scale.tower_can_i = (sfVector2f){0.1, 0.1};
    game->scale.tower_crossbow_i = (sfVector2f){0.1, 0.1};
    game->scale.life_bar = (sfVector2f){0.5, 0.5};
    game->scale.start = (sfVector2f){0.9, 0.9};
    game->scale.coin = (sfVector2f){0.3, 0.3};
    game->scale.button_pause = (sfVector2f){0.5, 0.5};
    game->scale.board = (sfVector2f){0.8, 0.8};
    game->scale.button_exit = (sfVector2f){0.5, 0.5};
    game->scale.enemy_wildbord = (sfVector2f){0.6, 0.6};
    game->scale.enemy_rathian = (sfVector2f){0.55, 0.55};
}

void init_scale_two(game_t *game)
{
    game->scale.tower_can_two = (sfVector2f){0.35, 0.35};
    game->scale.tower_can_two_i = (sfVector2f){0.1, 0.1};
    game->scale.enemy_diablos = (sfVector2f){0.35, 0.35};
    game->scale.defender_fox = (sfVector2f){0.8, 0.8};
    game->scale.win = (sfVector2f){3, 1.8};
    game->scale.game_over = (sfVector2f){0.6, 0.6};
}
