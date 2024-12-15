/*
** EPITECH PROJECT, 2022
** set_scale.c
** File description:
** to set a scale
*/

#include "my.h"

void set_scale(game_t *game)
{
    set_scale_one(game);
    set_scale_two(game);
}

void set_scale_one(game_t *game)
{
    sfSprite_setScale(game->sprite.square_one, game->scale.square_one);
    sfSprite_setScale(game->sprite.square_two, game->scale.square_two);
    sfSprite_setScale(game->sprite.square_tree, game->scale.square_tree);
    sfSprite_setScale(game->sprite.square_four, game->scale.square_four);
    sfSprite_setScale(game->sprite.fox_i, game->scale.fox_i);
    sfSprite_setScale(game->sprite.tower_magic, game->scale.tower_magic);
    sfSprite_setScale(game->sprite.tower_magic_i,game->scale.tower_magic_i);
    sfSprite_setScale(game->sprite.tower_can, game->scale.tower_can);
    sfSprite_setScale(game->sprite.tower_crossbow,
    game->scale.tower_crossbow);
    sfSprite_setScale(game->sprite.tower_can_i, game->scale.tower_can_i);
    sfSprite_setScale(game->sprite.tower_crossbow_i,
    game->scale.tower_crossbow_i);
    sfSprite_setScale(game->sprite.life_bar, game->scale.life_bar);
    sfSprite_setScale(game->sprite.start, game->scale.start);
    sfSprite_setScale(game->sprite.coin, game->scale.coin);
    sfSprite_setScale(game->sprite.button_pause, game->scale.button_pause);
    sfSprite_setScale(game->sprite.board, game->scale.board);
    sfSprite_setScale(game->sprite.button_exit, game->scale.button_exit);
}

void set_scale_two(game_t *game)
{
    sfSprite_setScale(game->sprite.enemy_wildbord, game->scale.enemy_wildbord);
    sfSprite_setScale(game->sprite.enemy_rathian, game->scale.enemy_rathian);
    sfSprite_setScale(game->sprite.enemy_diablos, game->scale.enemy_diablos);
    sfSprite_setScale(game->sprite.defender_fox, game->scale.defender_fox);
    sfSprite_setScale(game->sprite.tower_can_two, game->scale.tower_can_two);
    sfSprite_setScale(game->sprite.tower_can_two_i,
    game->scale.tower_can_two_i);
    sfSprite_setScale(game->sprite.win, game->scale.win);
    sfSprite_setScale(game->sprite.game_over, game->scale.game_over);
}
