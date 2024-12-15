/*
** EPITECH PROJECT, 2022
** initialise_variable.c
** File description:
** init all variable
*/

#include "my.h"

void init_variables(game_t *game)
{
    init_variables_one(game);
    init_variables_two(game);
}

void init_variables_one(game_t *game)
{
    game->menu = 1;
    game->pause_menu = 1;
    game->life.life_bar = 11;
    game->score.count = 0;
    game->score.result = "O";
    game->var_clock.seconds = 0;
    game->var_clock.sec_attack = 0;
    game->var.fox_active = 0;
    game->var.square_one_active = 0;
    game->var.square_two_active = 0;
    game->var.square_tree_active = 0;
    game->var.square_four_active = 0;
    game->var.tower_can_active = 0;
    game->var.tower_magic_active = 0;
    game->var.tower_crossbow_active = 0;
    game->var.tower_can_two_active = 0;
    game->var.tower_can_pose = 0;
    game->var.tower_can_two_pose = 0;
    game->var.tower_magic_pose = 0;
    game->var.tower_crossbow_pose = 0;
    game->var.square_check = malloc(sizeof(int) * 4);
}

void init_acive_tower(game_t *game)
{
    game->var.square_one_active = 0;
    game->var.square_two_active = 0;
    game->var.square_tree_active = 0;
    game->var.square_four_active = 0;
}

void init_variables_two(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        game->var.square_check[i] = 0;
    }
    game->var.square_check[3] = '\0';
    game->life.enemy_wildbord = 9;
    game->life.enemy_rathian = 15;
    game->life.enemy_diablos = 10;
    game->var.win = 0;
}
