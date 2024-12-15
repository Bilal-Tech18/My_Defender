/*
** EPITECH PROJECT, 2022
** green_dragon.c
** File description:
** create the green dragon
*/

#include "my.h"

void go_rigth_rathian(game_t *game)
{
    game->pos.enemy_rathian.x += 6;
        if (game->pos.enemy_rathian.x > 1220) {
            game->pos.enemy_rathian.x = -1000;
            game->life.life_bar -= 3;
            game->var.fox_active = 0;
            game->pos.fox_i.x = 1022;
            game->pos.defender_fox.x = 6000;
        }
    sfSprite_setPosition(game->sprite.enemy_rathian, game->pos.enemy_rathian);
}
