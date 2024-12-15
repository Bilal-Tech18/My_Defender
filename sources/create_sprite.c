/*
** EPITECH PROJECT, 2022
** create_destroy.c
** File description:
** create_destroy
*/

#include "my.h"

static void create_sprite_one(game_t *game)
{
    game->sprite.menu = wall_paper("sprite/wallpaper_menu.jpg");
    game->sprite.wallpaper = wall_paper("sprite/map.jpg");
    game->sprite.fox_i = sprite_create("sprite/defender_i.png",
    game->sprite.fox_i, game->rect.fox_i,
    game->text.fox_i);
    game->sprite.tower_can_i = sprite_create("sprite/can_tower_i.png",
    game->sprite.tower_can_i, game->rect.tower_can_i,
    game->text.tower_can_i);
    game->sprite.tower_crossbow_i = sprite_create("sprite/tower.png",
    game->sprite.tower_crossbow_i, game->rect.tower_crossbow_i,
    game->text.tower_crossbow_i);
    game->sprite.life_bar = sprite_create("sprite/health_bar.png",
    game->sprite.life_bar, game->rect.life_bar,
    game->text.life_bar);
    game->sprite.start = sprite_create("sprite/press_start.png",
    game->sprite.start, game->rect.start,
    game->text.start);
    game->sprite.coin = sprite_create("sprite/coin.png",
    game->sprite.coin, game->rect.coin,
    game->text.coin);
}

static void create_sprite_two(game_t *game)
{
    game->sprite.board = sprite_create("sprite/menu.png",
    game->sprite.board, game->rect.board,
    game->text.board);
    game->sprite.button_pause = sprite_create("sprite/pause_button.png",
    game->sprite.button_pause, game->rect.button_pause,
    game->text.button_pause);
    game->sprite.button_exit = sprite_create("sprite/exit_button.png",
    game->sprite.button_exit, game->rect.button_exit,
    game->text.button_exit);
    game->sprite.enemy_wildbord = sprite_create("sprite/sanglier.png",
    game->sprite.enemy_wildbord, game->rect.enemy_wildbord,
    game->text.enemy_wildbord);
    game->sprite.enemy_rathian = sprite_create("sprite/rathian.png",
    game->sprite.enemy_rathian, game->rect.enemy_rathian,
    game->text.enemy_rathian);
    game->sprite.enemy_diablos = sprite_create("sprite/diablos.png",
    game->sprite.enemy_diablos, game->rect.enemy_diablos,
    game->text.enemy_diablos);
}

static void create_sprite_tree(game_t *game)
{
    game->sprite.defender_fox = sprite_create("sprite/defender.png",
    game->sprite.defender_fox, game->rect.defender_fox,
    game->text.defender_fox);
    game->sprite.tower_can = sprite_create("sprite/can_tower.png",
    game->sprite.tower_can, game->rect.tower_can,
    game->text.tower_can);
    game->sprite.tower_crossbow = sprite_create("sprite/tower_crossbow.png",
    game->sprite.tower_crossbow, game->rect.tower_crossbow,
    game->text.tower_crossbow);
    game->sprite.square_one = sprite_create("sprite/square.png",
    game->sprite.square_one, game->rect.square_one,
    game->text.square_one);
    game->sprite.square_two = sprite_create("sprite/square.png",
    game->sprite.square_two, game->rect.square_two,
    game->text.square_two);
    game->sprite.square_tree = sprite_create("sprite/square.png",
    game->sprite.square_tree, game->rect.square_tree,
    game->text.square_tree);
}

static void create_sprite_four(game_t *game)
{
    game->sprite.square_four = sprite_create("sprite/square.png",
    game->sprite.square_four, game->rect.square_four,
    game->text.square_four);
    game->sprite.tower_magic = sprite_create("sprite/tower_mage.png",
    game->sprite.tower_magic, game->rect.tower_magic,
    game->text.tower_magic);
    game->sprite.tower_magic_i = sprite_create("sprite/tower_magic_i.png",
    game->sprite.tower_magic_i, game->rect.tower_magic_i,
    game->text.tower_magic_i);
    game->sprite.tower_can_two = sprite_create("sprite/tower_can.png",
    game->sprite.tower_can_two, game->rect.tower_can_two,
    game->text.tower_can_two);
    game->sprite.tower_can_two_i = sprite_create("sprite/tower_can_i.png",
    game->sprite.tower_can_two_i, game->rect.tower_can_two_i,
    game->text.tower_can_two_i);
    game->sprite.win = sprite_create("sprite/you_win.png",
    game->sprite.win, game->rect.win,
    game->text.win);
}

void create_sprite(game_t *game)
{
    create_sprite_one(game);
    create_sprite_two(game);
    create_sprite_tree(game);
    create_sprite_four(game);
    create_sprite_five(game);
}
