/*
** EPITECH PROJECT, 2022
** all_button.c
** File description:
** all_button
*/

#include "my.h"

void button_exit(game_t *game)
{
    if (game->event.mouseButton.x >= game->pos.button_exit.x &&
    game->event.mouseButton.x <= game->pos.button_exit.x + 30 &&
    game->event.mouseButton.y >= game->pos.button_exit.y &&
    game->event.mouseButton.y <= game->pos.button_exit.y + 30)
        sfRenderWindow_close(game->window);
}

void button_pause(game_t *game)
{
    if (game->menu != 1 && game->event.mouseButton.x >=
    game->pos.button_pause.x && game->event.mouseButton.x <=
    game->pos.button_pause.x + 30 && game->event.mouseButton.y >=
    game->pos.button_pause.y && game->event.mouseButton.y <=
    game->pos.button_pause.y + 30) {
        game->pause_menu *= -1;
        game->menu *= -1;
        }
    if (game->menu == 1 && game->event.mouseButton.x >=
    game->pos.button_pause_menu.x && game->event.mouseButton.x <=
    game->pos.button_pause_menu.x + 40 && game->event.mouseButton.y >=
    game->pos.button_pause_menu.y && game->event.mouseButton.y <=
    game->pos.button_pause_menu.y + 40) {
        game->pause_menu *= -1;
        game->menu *= -1;
        }
}
