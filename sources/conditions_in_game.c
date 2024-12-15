/*
** EPITECH PROJECT, 2022
** conditions_in_game.c
** File description:
** conditions_in_game
*/

#include "my.h"

void condition_win(game_t *game)
{
    if (game->life.enemy_diablos == 0 && game->life.enemy_wildbord == 0 &&
    game->life.enemy_rathian == 0)
        game->var.win = 1;
}

void conditions_in_game(game_t *game, score_t *score)
{
    init_scale(game);
    set_scale(game);
    go_rigth_wildbord(game);
    go_rigth_rathian(game);
    go_rigth_diablos(game);
    count_score(game);
    square_attack(game);
    condition_win(game);
    set_texture(game);
    set_position(game);
    set_score(game);
    draw_all(game, score);
}

void create_sprite_five(game_t *game)
{
    game->sprite.game_over = sprite_create("sprite/game_over.png",
    game->sprite.game_over, game->rect.game_over,
    game->text.game_over);
}
