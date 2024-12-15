/*
** EPITECH PROJECT, 2022
** draw_all.c
** File description:
** all the draw
*/

#include "my.h"

void draw_all(game_t *game, score_t *score)
{
    draw_all_one(game, score);
    draw_all_two(game, score);
}

void draw_all_one(game_t *game, score_t *score)
{
    sfRenderWindow_drawSprite(game->window, game->sprite.wallpaper, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.square_one, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.square_two, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.square_tree, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.square_four, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.tower_can, NULL);
    sfRenderWindow_drawSprite(game->window,
    game->sprite.tower_crossbow,NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.tower_can_i, NULL);
    sfRenderWindow_drawSprite(game->window,
    game->sprite.tower_crossbow_i,NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.life_bar, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.coin, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.button_pause, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.enemy_wildbord, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.fox_i, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.defender_fox, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.enemy_rathian, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.enemy_diablos, NULL);
}

void condition_lose(game_t *game)
{
    if (game->life.life_bar <= 0) {
        sfRenderWindow_drawSprite(game->window, game->sprite.game_over, NULL);
        game->var.fox_active = 0;
        game->pos.enemy_wildbord.x = -200000;
        game->pos.enemy_diablos.x = -200000;
        game->pos.enemy_rathian.x = -200000;
        game->pos.tower_can.x = -3000;
        game->pos.tower_can_two.x = -3000;
        game->pos.tower_crossbow.x = -3000;
        game->pos.tower_magic.x = -3000;
    }
}

void draw_all_two(game_t *game, score_t *score)
{
    sfRenderWindow_drawText(game->window, score->text, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.tower_magic, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.tower_magic_i, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.tower_can_two, NULL);
    sfRenderWindow_drawSprite(game->window, game->sprite.tower_can_two_i,
    NULL);
    if (game->var.win == 1) {
        sfRenderWindow_drawSprite(game->window, game->sprite.win, NULL);
    }
    sfRenderWindow_drawSprite(game->window, game->sprite.button_exit, NULL);
    condition_lose(game);
}
