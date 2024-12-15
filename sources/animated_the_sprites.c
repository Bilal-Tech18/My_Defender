/*
** EPITECH PROJECT, 2022
** animated_the_sprites.c
** File description:
** animated all the images
*/

#include "my.h"

void animated_all_the_sprites(game_t *game)
{
    anime_sprite(&game->rect.win, 6720, 480);
    anime_sprite(&game->rect.tower_can_two, 2520, 504);
    anime_sprite(&game->rect.tower_magic, 2816, 512);
    anime_sprite(&game->rect.tower_can, 3072, 512);
    anime_sprite(&game->rect.tower_crossbow, 3000, 500);
    anime_sprite(&game->rect.start, 2680, 532);
    anime_sprite(&game->rect.coin, 16000, 800);
    anime_sprite(&game->rect.enemy_wildbord, 1225, 245);
    anime_sprite(&game->rect.enemy_rathian, 5632, 512);
    anime_sprite(&game->rect.enemy_diablos, 8449, 497);
    anime_sprite(&game->rect.defender_fox, 8892, 228);
    move_rect_life_bar(game);
}

struct {
    int key;
    int value;
} MOVE_RECT[] = {
    {11, 0},
    {10, 512},
    {9, 1024},
    {8, 1536},
    {7, 2048},
    {6, 2560},
    {5, 3072},
    {4, 3584},
    {3, 4096},
    {2, 4608},
    {1, 5120},
    {0, 5632},
};

void move_rect_life_bar(game_t *game)
{
    for (size_t i = 0; i < sizeof(MOVE_RECT) / sizeof(MOVE_RECT[0]); i += 1) {
        if (game->life.life_bar == MOVE_RECT[i].key)
            game->rect.life_bar.left = MOVE_RECT[i].value;
    }
}
