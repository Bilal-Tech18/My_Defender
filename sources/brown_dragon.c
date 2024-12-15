/*
** EPITECH PROJECT, 2022
** brown_dragon.c
** File description:
** create the brown dragon
*/

#include "my.h"

void go_rigth_diablos(game_t *game)
{
    game->pos.enemy_diablos.x += 7;
        if (game->pos.enemy_diablos.x > 970) {
            game->pos.enemy_diablos.x = -200;
            game->life.life_bar -= 2;
        }
    sfSprite_setPosition(game->sprite.enemy_diablos, game->pos.enemy_diablos);
}
