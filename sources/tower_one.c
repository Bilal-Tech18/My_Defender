/*
** EPITECH PROJECT, 2022
** tower_one.c
** File description:
** conditions for all tower
*/

#include "my.h"

void condition_square(game_t *game, variables_t *var)
{
    condition_square_one(game, var);
    condition_square_two(game, var);
    condition_square_tree(game, var);
    condition_square_four(game, var);
    condition_tower_can(game);
    condition_tower_can_two(game);
    condition_tower_crossbow(game);
    condition_tower_magic(game);
}

void condition_square_one(game_t *game, variables_t *var)
{
    if (var->square_one_active == 1) {
        if (game->event.mouseButton.x >= 310 &&
        game->event.mouseButton.x <= 365 &&
        game->event.mouseButton.y >= 225 &&
        game->event.mouseButton.y <= 285){
            init_acive_tower(game);
            init_pos_tower_i(game);
        }
    } else if (game->var.square_check[0] == 0 &&
    game->event.mouseButton.x >= 310 &&
    game->event.mouseButton.x <= 365 &&
    game->event.mouseButton.y >= 225 &&
    game->event.mouseButton.y <= 285){
        var->square_one_active = 1;
        game->pos.tower_can_i = (sfVector2f){270, 190};
        game->pos.tower_can_two_i = (sfVector2f){270, 250};
        game->pos.tower_crossbow_i = (sfVector2f){380, 190};
        game->pos.tower_magic_i = (sfVector2f){380, 250};
    }
}

void condition_square_two(game_t *game, variables_t *var)
{
    if (var->square_two_active == 1) {
        if (game->event.mouseButton.x >= 821 &&
        game->event.mouseButton.x <= 880 &&
        game->event.mouseButton.y >= 225 &&
        game->event.mouseButton.y <= 285){
            init_acive_tower(game);
            init_pos_tower_i(game);
        }
    } else if (game->var.square_check[1] == 0 &&
    game->event.mouseButton.x >= 821 &&
    game->event.mouseButton.x <= 880 &&
    game->event.mouseButton.y >= 227 &&
    game->event.mouseButton.y <= 285) {
        var->square_two_active = 1;
        game->pos.tower_can_i = (sfVector2f){786, 190};
        game->pos.tower_can_two_i = (sfVector2f){786, 250};
        game->pos.tower_crossbow_i = (sfVector2f){890, 190};
        game->pos.tower_magic_i = (sfVector2f){380, 250};
        game->pos.tower_magic_i = (sfVector2f){890, 250};
    }
}

void condition_square_tree(game_t *game, variables_t *var)
{
    if (var->square_tree_active == 1) {
        if (game->event.mouseButton.x >= 308 &&
        game->event.mouseButton.x <= 366 &&
        game->event.mouseButton.y >= 507 &&
        game->event.mouseButton.y <= 565) {
            init_acive_tower(game);
            init_pos_tower_i(game);
        }
    } else if (game->var.square_check[2] == 0 &&
    game->event.mouseButton.x >= 308 &&
    game->event.mouseButton.x <= 366 &&
    game->event.mouseButton.y >= 507 &&
    game->event.mouseButton.y <= 565) {
        var->square_tree_active = 1;
        game->pos.tower_can_i = (sfVector2f){270, 470};
        game->pos.tower_can_two_i = (sfVector2f){270, 530};
        game->pos.tower_crossbow_i = (sfVector2f){380, 470};
        game->pos.tower_magic_i = (sfVector2f){380, 250};
        game->pos.tower_magic_i = (sfVector2f){380, 530};
    }
}

void condition_square_four(game_t *game, variables_t *var)
{
    if (var->square_four_active == 1) {
        if (game->event.mouseButton.x >= 822 &&
        game->event.mouseButton.x <= 880 &&
        game->event.mouseButton.y >= 507 &&
        game->event.mouseButton.y <= 565) {
            init_acive_tower(game);
            init_pos_tower_i(game);
        }
    } else if (game->var.square_check[3] == 0 &&
    game->event.mouseButton.x >= 822 &&
    game->event.mouseButton.x <= 880 &&
    game->event.mouseButton.y >= 507 &&
    game->event.mouseButton.y <= 565) {
        var->square_four_active = 1;
        game->pos.tower_can_i = (sfVector2f){786, 470};
        game->pos.tower_can_two_i = (sfVector2f){786, 530};
        game->pos.tower_crossbow_i = (sfVector2f){890, 470};
        game->pos.tower_magic_i = (sfVector2f){890, 530};
    }
}
