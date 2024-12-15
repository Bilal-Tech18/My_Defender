/*
** EPITECH PROJECT, 2022
** brown_dragon.c
** File description:
** create the brown dragon
*/

#include "my.h"

void change_position_fox(game_t *game)
{
    if (game->var.fox_active == 0 && game->score.count >= 200 &&
    game->event.mouseButton.x >= 1110 &&
    game->event.mouseButton.x <= 1160 &&
    game->event.mouseButton.y >= 400 &&
    game->event.mouseButton.y <= 440) {
        game->pos.defender_fox = game->pos.fox;
        game->pos.fox_i.x = 6000;
        game->score.count -= 100;
        game->var.fox_active = 1;
    }
}

void fox_attack(game_t *game)
{
    if (game->var.fox_active == 1 && game->pos.enemy_rathian.x >= 800
    && game->pos.enemy_rathian.x <= 1000 && game->pos.enemy_rathian.y >= 160 &&
    game->pos.enemy_rathian.y <= 180) {
        game->life.enemy_rathian -= 2;
    }
    if (game->life.enemy_rathian == 0)
        game->pos.enemy_rathian.x = -200000;
}
