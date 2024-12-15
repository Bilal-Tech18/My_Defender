/*
** EPITECH PROJECT, 2022
** tower_attack.c
** File description:
** tower_attack
*/

#include "my.h"

void square_attack(game_t *game)
{
    if (sfRenderWindow_isOpen(game->window)) {
        if (game->var_clock.sec_attack >= 0.4) {
            square_one_attack(game);
            square_two_attack(game);
            square_tree_attack(game);
            square_four_attack(game);
            fox_attack(game);
            sfClock_restart(game->var_clock.clock_attack);
        }
    }
}

void square_one_attack(game_t *game)
{
    if (game->var.square_check[0] == 1 && game->pos.enemy_wildbord.x >= 120
    && game->pos.enemy_wildbord.x <= 400 && game->pos.enemy_wildbord.y >= 60 &&
    game->pos.enemy_wildbord.y <= 80) {
        game->life.enemy_wildbord -= 1;
    }
    if (game->life.enemy_wildbord == 0)
        game->pos.enemy_wildbord.x = -200000;
    if (game->var.square_check[0] == 1 && game->pos.enemy_rathian.x >= 20
    && game->pos.enemy_rathian.x <= 350 && game->pos.enemy_rathian.y >= 160 &&
    game->pos.enemy_rathian.y <= 180) {
        game->life.enemy_rathian -= 1;
    }
    if (game->life.enemy_rathian == 0)
        game->pos.enemy_rathian.x = -200000;
}

void square_two_attack(game_t *game)
{
    if (game->var.square_check[1] == 1 && game->pos.enemy_wildbord.x >= 550
    && game->pos.enemy_wildbord.x <= 900 && game->pos.enemy_wildbord.y >= 60 &&
    game->pos.enemy_wildbord.y <= 80) {
        game->life.enemy_wildbord -= 1;
    }
    if (game->life.enemy_wildbord == 0)
        game->pos.enemy_wildbord.x = -200000;
    if (game->var.square_check[1] == 1 && game->pos.enemy_rathian.x >= 400
    && game->pos.enemy_rathian.x <= 900 && game->pos.enemy_rathian.y >= 160 &&
    game->pos.enemy_rathian.y <= 180) {
        game->life.enemy_rathian -= 1;
    }
    if (game->life.enemy_rathian == 0)
        game->pos.enemy_rathian.x = -200000;
}

void square_tree_attack(game_t *game)
{
    if (game->var.square_check[2] == 1 && game->pos.enemy_diablos.x >= 110
    && game->pos.enemy_diablos.x <= 400 && game->pos.enemy_diablos.y >= 530 &&
    game->pos.enemy_diablos.y <= 550) {
        game->life.enemy_diablos -= 1;
    }
    if (game->life.enemy_diablos == 0)
        game->pos.enemy_diablos.x = -200000;
    if (game->var.square_check[2] == 1 && game->pos.enemy_rathian.x >= 20
    && game->pos.enemy_rathian.x <= 350 && game->pos.enemy_rathian.y >= 160 &&
    game->pos.enemy_rathian.y <= 180) {
        game->life.enemy_rathian -= 1;
    }
    if (game->life.enemy_rathian == 0)
        game->pos.enemy_rathian.x = -200000;
}

void square_four_attack(game_t *game)
{
    if (game->var.square_check[3] == 1 && game->pos.enemy_diablos.x >= 550
    && game->pos.enemy_diablos.x <= 900 && game->pos.enemy_diablos.y >= 530 &&
    game->pos.enemy_diablos.y <= 550) {
        game->life.enemy_diablos -= 1;
    }
    if (game->life.enemy_diablos == 0)
        game->pos.enemy_diablos.x = -200000;
    if (game->var.square_check[3] == 1 && game->pos.enemy_rathian.x >= 400
    && game->pos.enemy_rathian.x <= 900 && game->pos.enemy_rathian.y >= 160 &&
    game->pos.enemy_rathian.y <= 180) {
        game->life.enemy_rathian -= 1;
    }
    if (game->life.enemy_rathian == 0)
        game->pos.enemy_rathian.x = -200000;
}
