/*
** EPITECH PROJECT, 2022
** destroy_all.c
** File description:
** destroy_all
*/

#include "my.h"

void destroy_all(game_t *game, score_t *score)
{
    destroy_all_one(game, score);
    destroy_all_two(game, score);
}

void destroy_all_one(game_t *game, score_t *score)
{
    // sfMusic_destroy(game->song);
    sfSprite_destroy(game->sprite.square_one);
    sfSprite_destroy(game->sprite.square_two);
    sfSprite_destroy(game->sprite.square_tree);
    sfSprite_destroy(game->sprite.square_four);
    sfSprite_destroy(game->sprite.fox_i);
    sfSprite_destroy(game->sprite.tower_can);
    sfSprite_destroy(game->sprite.tower_crossbow);
    sfSprite_destroy(game->sprite.tower_can_i);
    sfSprite_destroy(game->sprite.tower_crossbow_i);
    sfSprite_destroy(game->sprite.start);
    sfSprite_destroy(game->sprite.coin);
    sfSprite_destroy(game->sprite.menu);
    sfSprite_destroy(game->sprite.board);
    sfSprite_destroy(game->sprite.wallpaper);
    sfSprite_destroy(game->sprite.button_exit);
    sfSprite_destroy(game->sprite.button_pause);
    sfSprite_destroy(game->sprite.defender_fox);
    sfSprite_destroy(game->sprite.enemy_rathian);
}

void destroy_all_two(game_t *game, score_t *score)
{
    sfSprite_destroy(game->sprite.enemy_diablos);
    sfSprite_destroy(game->sprite.enemy_wildbord);
    sfSprite_destroy(game->sprite.life_bar);
    sfText_destroy(score->text);
    sfSprite_destroy(game->sprite.tower_can_two);
    sfSprite_destroy(game->sprite.tower_can_two_i);
    sfSprite_destroy(game->sprite.tower_magic);
    sfSprite_destroy(game->sprite.tower_magic_i);
    sfSprite_destroy(game->sprite.win);
    sfSprite_destroy(game->sprite.game_over);
}
