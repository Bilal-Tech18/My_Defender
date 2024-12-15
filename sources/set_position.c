/*
** EPITECH PROJECT, 2022
** set_position.c
** File description:
** set_position
*/

#include "my.h"

void set_position(game_t *game)
{
    set_position_one(game);
    set_position_two(game);
    set_position_tree(game);
}

void set_position_one(game_t *game)
{
    sfSprite_setPosition(game->sprite.fox_i,
    game->pos.fox_i);
    sfSprite_setPosition(game->sprite.tower_can_i,
    game->pos.tower_can_i);
    sfSprite_setPosition(game->sprite.tower_crossbow_i,
    game->pos.tower_crossbow_i);
    sfSprite_setPosition(game->sprite.life_bar,
    game->pos.life_bar);
    sfSprite_setPosition(game->sprite.start,
    game->pos.start);
    sfSprite_setPosition(game->sprite.coin,
    game->pos.coin);
    sfSprite_setPosition(game->sprite.button_pause,
    game->pos.button_pause);
    sfSprite_setPosition(game->sprite.button_exit,
    game->pos.button_exit);
}

void set_position_two(game_t *game)
{
    sfSprite_setPosition(game->sprite.enemy_wildbord,
    game->pos.enemy_wildbord);
    sfSprite_setPosition(game->sprite.enemy_rathian,
    game->pos.enemy_rathian);
    sfSprite_setPosition(game->sprite.enemy_diablos,
    game->pos.enemy_diablos);
    sfSprite_setPosition(game->sprite.defender_fox,
    game->pos.defender_fox);
    sfSprite_setPosition(game->sprite.tower_can,
    game->pos.tower_can);
    sfSprite_setPosition(game->sprite.tower_crossbow,
    game->pos.tower_crossbow);
    sfSprite_setPosition(game->sprite.square_one,
    game->pos.square_one);
    sfSprite_setPosition(game->sprite.square_two,
    game->pos.square_two);
    sfSprite_setPosition(game->sprite.square_tree,
    game->pos.square_tree);
    sfSprite_setPosition(game->sprite.square_four,
    game->pos.square_four);
}

void set_position_tree(game_t *game)
{
    sfSprite_setPosition(game->sprite.tower_magic,
    game->pos.tower_magic);
    sfSprite_setPosition(game->sprite.tower_magic_i,
    game->pos.tower_magic_i);
    sfSprite_setPosition(game->sprite.tower_can_two,
    game->pos.tower_can_two);
    sfSprite_setPosition(game->sprite.tower_can_two_i,
    game->pos.tower_can_two_i);
    sfSprite_setPosition(game->sprite.win,
    game->pos.win);
    sfSprite_setPosition(game->sprite.game_over,
    game->pos.game_over);
}
