/*
** EPITECH PROJECT, 2022
** conditions_tower.c
** File description:
** conditions_tower
*/

#include "my.h"

void condition_tower_crossbow(game_t *game)
{
    if (game->var.tower_crossbow_active == 0) {
        if (game->score.count >= 100 && game->event.mouseButton.x >=
        game->pos.tower_crossbow_i.x && game->event.mouseButton.x <=
        game->pos.tower_crossbow_i.x + 25 && game->event.mouseButton.y >=
        game->pos.tower_crossbow_i.y && game->event.mouseButton.y <=
        game->pos.tower_crossbow_i.y + 50) {
            init_pos_tower_i(game);
            game->var.tower_crossbow_active = 1;
            game->score.count -= 100;
            all_tower_pos_conditions(game);
        }
    }
}

void condition_tower_can(game_t *game)
{
    if (game->var.tower_can_active == 0) {
        if (game->score.count >= 100 && game->event.mouseButton.x >=
        game->pos.tower_can_i.x && game->event.mouseButton.x <=
        game->pos.tower_can_i.x + 25 && game->event.mouseButton.y >=
        game->pos.tower_can_i.y && game->event.mouseButton.y <=
        game->pos.tower_can_i.y + 50) {
            init_pos_tower_i(game);
            game->var.tower_can_active = 1;
            game->score.count -= 100;
            all_tower_pos_conditions(game);
        }
    }
}

void condition_tower_can_two(game_t *game)
{
    if (game->var.tower_can_two_active == 0) {
        if (game->score.count >= 100 && game->event.mouseButton.x >=
        game->pos.tower_can_two_i.x && game->event.mouseButton.x <=
        game->pos.tower_can_two_i.x + 25 && game->event.mouseButton.y >=
        game->pos.tower_can_two_i.y && game->event.mouseButton.y <=
        game->pos.tower_can_two_i.y + 50) {
            init_pos_tower_i(game);
            game->var.tower_can_two_active = 1;
            game->score.count -= 100;
            all_tower_pos_conditions(game);
        }
    }
}

void condition_tower_magic(game_t *game)
{
    if (game->var.tower_magic_active == 0) {
        if (game->score.count >= 100 && game->event.mouseButton.x >=
        game->pos.tower_magic_i.x && game->event.mouseButton.x <=
        game->pos.tower_magic_i.x + 25 && game->event.mouseButton.y >=
        game->pos.tower_magic_i.y && game->event.mouseButton.y <=
        game->pos.tower_magic_i.y + 50) {
            init_pos_tower_i(game);
            game->var.tower_magic_active = 1;
            game->score.count -= 100;
            all_tower_pos_conditions(game);
        }
    }
}
