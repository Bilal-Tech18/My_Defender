/*
** EPITECH PROJECT, 2022
** set_texture.c
** File description:
** set_texture_and_position
*/

#include "my.h"

void set_texture(game_t *game)
{
    set_texture_one(game);
    set_texture_two(game);
    set_texture_tree(game);
}

void set_texture_one(game_t *game)
{
    sfSprite_setTextureRect(game->sprite.fox_i,
    game->rect.fox_i);
    sfSprite_setTextureRect(game->sprite.tower_can_i,
    game->rect.tower_can_i);
    sfSprite_setTextureRect(game->sprite.tower_crossbow_i,
    game->rect.tower_crossbow_i);
    sfSprite_setTextureRect(game->sprite.life_bar,
    game->rect.life_bar);
    sfSprite_setTextureRect(game->sprite.coin,
    game->rect.coin);
    sfSprite_setTextureRect(game->sprite.board,
    game->rect.board);
    sfSprite_setTextureRect(game->sprite.button_pause,
    game->rect.button_pause);
    sfSprite_setTextureRect(game->sprite.button_exit,
    game->rect.button_exit);
    sfSprite_setTextureRect(game->sprite.enemy_wildbord,
    game->rect.enemy_wildbord);
    sfSprite_setTextureRect(game->sprite.enemy_rathian,
    game->rect.enemy_rathian);
}

void set_texture_two(game_t *game)
{
    sfSprite_setTextureRect(game->sprite.enemy_diablos,
    game->rect.enemy_diablos);
    sfSprite_setTextureRect(game->sprite.defender_fox,
    game->rect.defender_fox);
    sfSprite_setTextureRect(game->sprite.tower_can,
    game->rect.tower_can);
    sfSprite_setTextureRect(game->sprite.tower_crossbow,
    game->rect.tower_crossbow);
    sfSprite_setTextureRect(game->sprite.square_one,
    game->rect.square_one);
    sfSprite_setTextureRect(game->sprite.square_two,
    game->rect.square_two);
    sfSprite_setTextureRect(game->sprite.square_tree,
    game->rect.square_tree);
    sfSprite_setTextureRect(game->sprite.square_four,
    game->rect.square_four);
    sfSprite_setTextureRect(game->sprite.tower_magic,
    game->rect.tower_magic);
    sfSprite_setTextureRect(game->sprite.tower_magic_i,
    game->rect.tower_magic_i);
}

void set_texture_tree(game_t *game)
{
    sfSprite_setTextureRect(game->sprite.tower_can_two,
    game->rect.tower_can_two);
    sfSprite_setTextureRect(game->sprite.tower_can_two_i,
    game->rect.tower_can_two_i);
    sfSprite_setTextureRect(game->sprite.win,
    game->rect.win);
    sfSprite_setTextureRect(game->sprite.game_over,
    game->rect.game_over);
}
