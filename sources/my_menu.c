/*
** EPITECH PROJECT, 2022
** my_menu.c
** File description:
** create a menu for my game
*/

#include "my.h"

void init_scale_menu(game_t *game)
{
    game->scale.button_pause = (sfVector2f){0.6, 0.6};
    game->scale.board = (sfVector2f){0.8, 0.8};
    game->scale.button_exit = (sfVector2f){0.5, 0.5};
    sfSprite_setScale(game->sprite.button_pause, game->scale.button_pause);
    sfSprite_setScale(game->sprite.board, game->scale.board);
    sfSprite_setScale(game->sprite.button_exit, game->scale.button_exit);
}

void set_position_menu(game_t *game)
{
    sfSprite_setPosition(game->sprite.start,
    game->pos.start);
    sfSprite_setPosition(game->sprite.button_pause,
    game->pos.button_pause_menu);
    sfSprite_setPosition(game->sprite.board,
    game->pos.board);
    sfSprite_setPosition(game->sprite.button_exit,
    game->pos.button_exit);
}

void set_texture_menu(game_t *game)
{
    sfSprite_setTextureRect(game->sprite.start,
    game->rect.start);
    sfSprite_setTextureRect(game->sprite.board,
    game->rect.board);
    sfSprite_setTextureRect(game->sprite.button_pause,
    game->rect.button_pause);
    sfSprite_setTextureRect(game->sprite.button_exit,
    game->rect.button_exit);
}

void condition_menu(game_t *game)
{
    init_scale_menu(game);
    set_texture_menu(game);
    set_position_menu(game);
    draw_all_before_game(game);
}

void draw_all_before_game(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->sprite.menu, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.start, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.board, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.button_pause, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.button_exit, NULL);
}
