/*
** EPITECH PROJECT, 2022
** luffy.c
** File description:
** Sprite of Luffy
*/

#include "my.h"

void go_rigth_wildbord(game_t *game)
{
    game->pos.enemy_wildbord.x += 10;
        if (game->pos.enemy_wildbord.x > 1020) {
            game->pos.enemy_wildbord.x = -150;
            game->life.life_bar -= 1;
        }
    sfSprite_setPosition(game->sprite.enemy_wildbord,
    game->pos.enemy_wildbord);
}
