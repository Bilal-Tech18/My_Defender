/*
** EPITECH PROJECT, 2022
** conditions_tower_two.c
** File description:
** conditions_tower
*/

#include "my.h"

void tower_pos_tree(game_t *game)
{
    if (game->var.tower_can_pose == 0 && game->var.square_check[2] == 0 &&
    game->var.square_tree_active == 1 && game->var.tower_can_active == 1) {
        game->pos.tower_can = (sfVector2f){300, 430};
        game->var.square_tree_active = 0;
        game->var.square_check[2] = 1;
        game->var.tower_can_pose = 1;
    }
    if (game->var.tower_can_two_pose == 0 && game->var.square_check[2] == 0 &&
    game->var.square_tree_active == 1 && game->var.tower_can_two_active == 1) {
        game->pos.tower_can_two = (sfVector2f){292, 410};
        game->var.square_tree_active = 0;
        game->var.square_check[2] = 1;
        game->var.tower_can_two_pose = 1;
    }
    tower_tree_pos(game);
}

void tower_tree_pos(game_t *game)
{
    if (game->var.tower_crossbow_pose == 0 && game->var.square_check[2] == 0 &&
    game->var.square_tree_active == 1 &&
    game->var.tower_crossbow_active == 1) {
        game->pos.tower_crossbow = (sfVector2f){300, 430};
        game->var.square_tree_active = 0;
        game->var.square_check[2] = 1;
        game->var.tower_crossbow_pose = 1;
    }
    if (game->var.tower_magic_pose == 0 && game->var.square_check[2] == 0 &&
    game->var.square_tree_active == 1 && game->var.tower_magic_active == 1) {
        game->pos.tower_magic = (sfVector2f){298, 410};
        game->var.square_tree_active = 0;
        game->var.square_check[2] = 1;
        game->var.tower_magic_pose = 1;
    }
}

void tower_pos_four(game_t *game)
{
    if (game->var.tower_can_pose == 0 && game->var.square_check[3] == 0 &&
    game->var.square_four_active == 1 && game->var.tower_can_active == 1) {
        game->pos.tower_can = (sfVector2f){812, 430};
        game->var.square_four_active = 0;
        game->var.square_check[3] = 1;
        game->var.tower_can_pose = 1;
    }
    if (game->var.tower_can_two_pose == 0 && game->var.square_check[3] == 0 &&
    game->var.square_four_active == 1 && game->var.tower_can_two_active == 1) {
        game->pos.tower_can_two = (sfVector2f){805, 410};
        game->var.square_four_active = 0;
        game->var.square_check[3] = 1;
        game->var.tower_can_two_pose = 1;
    }
    tower_four_pos(game);
}

void tower_four_pos(game_t *game)
{
    if (game->var.tower_crossbow_pose == 0 && game->var.square_check[3] == 0 &&
    game->var.square_four_active == 1 &&
    game->var.tower_crossbow_active == 1) {
        game->pos.tower_crossbow = (sfVector2f){812, 430};
        game->var.square_four_active = 0;
        game->var.square_check[3] = 1;
        game->var.tower_crossbow_pose = 1;
    }
    if (game->var.tower_magic_pose == 0 && game->var.square_check[3] == 0 &&
    game->var.square_four_active == 1 && game->var.tower_magic_active == 1) {
        game->pos.tower_magic = (sfVector2f){810, 410};
        game->var.square_four_active = 0;
        game->var.square_check[3] = 1;
        game->var.tower_magic_pose = 1;
    }
}
