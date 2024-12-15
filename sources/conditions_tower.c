/*
** EPITECH PROJECT, 2022
** conditions_tower.c
** File description:
** conditions_tower
*/

#include "my.h"

void all_tower_pos_conditions(game_t *game)
{
    tower_pos_one(game);
    tower_pos_two(game);
    tower_pos_tree(game);
    tower_pos_four(game);
}

void tower_pos_one(game_t *game)
{
    if (game->var.tower_can_pose == 0 && game->var.square_check[0] == 0 &&
    game->var.square_one_active == 1 && game->var.tower_can_active == 1) {
        game->pos.tower_can = (sfVector2f){300, 150};
        game->var.square_one_active = 0;
        game->var.square_check[0] = 1;
        game->var.tower_can_pose = 1;
    }
    if (game->var.tower_can_two_pose == 0 && game->var.square_check[0] == 0 &&
    game->var.square_one_active == 1 && game->var.tower_can_two_active == 1) {
        game->pos.tower_can_two = (sfVector2f){292, 130};
        game->var.square_one_active = 0;
        game->var.square_check[0] = 1;
        game->var.tower_can_two_pose = 1;
    }
    tower_one_pos(game);
}

void tower_one_pos(game_t *game)
{
    if (game->var.tower_crossbow_pose == 0 && game->var.square_check[0] == 0 &&
    game->var.square_one_active == 1 && game->var.tower_crossbow_active == 1) {
        game->pos.tower_crossbow = (sfVector2f){300, 150};
        game->var.square_one_active = 0;
        game->var.square_check[0] = 1;
        game->var.tower_crossbow_pose = 1;
    }
    if (game->var.tower_magic_pose == 0 && game->var.square_check[0] == 0 &&
    game->var.square_one_active == 1 && game->var.tower_magic_active == 1) {
        game->pos.tower_magic = (sfVector2f){298, 130};
        game->var.square_one_active = 0;
        game->var.square_check[0] = 1;
        game->var.tower_magic_pose = 1;
    }
}

void tower_pos_two(game_t *game)
{
    if (game->var.tower_can_pose == 0 && game->var.square_check[1] == 0 &&
    game->var.square_two_active == 1 && game->var.tower_can_active == 1) {
        game->pos.tower_can = (sfVector2f){812, 150};
        game->var.square_two_active = 0;
        game->var.square_check[1] = 1;
        game->var.tower_can_pose = 1;
    }
    if (game->var.tower_can_two_pose == 0 && game->var.square_check[1] == 0 &&
    game->var.square_two_active == 1 && game->var.tower_can_two_active == 1) {
        game->pos.tower_can_two = (sfVector2f){805, 130};
        game->var.square_two_active = 0;
        game->var.square_check[1] = 1;
        game->var.tower_can_two_pose = 1;
    }
    tower_two_pos(game);
}

void tower_two_pos(game_t *game)
{
    if (game->var.tower_crossbow_pose == 0 && game->var.square_check[1] == 0 &&
    game->var.square_two_active == 1 && game->var.tower_crossbow_active == 1) {
        game->pos.tower_crossbow = (sfVector2f){812, 150};
        game->var.square_two_active = 0;
        game->var.square_check[1] = 1;
        game->var.tower_crossbow_pose = 1;
    }
    if (game->var.tower_magic_pose == 0 && game->var.square_check[1] == 0 &&
    game->var.square_two_active == 1 && game->var.tower_magic_active == 1) {
        game->pos.tower_magic = (sfVector2f){810, 130};
        game->var.square_two_active = 0;
        game->var.square_check[1] = 1;
        game->var.tower_magic_pose = 1;
    }
}
