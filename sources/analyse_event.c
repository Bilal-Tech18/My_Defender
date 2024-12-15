/*
** EPITECH PROJECT, 2022
** analyse_event.c
** File description:
** analyse_event
*/

#include "my.h"

void analyse_event(sfRenderWindow *window, game_t *game)
{
    while (sfRenderWindow_pollEvent(window, &game->event)) {
        if (game->event.type == sfEvtClosed || game->event.type == sfKeyEscape)
            sfRenderWindow_close(window);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)  ||
            sfKeyboard_isKeyPressed(sfKeyQ))
            sfRenderWindow_close(window);
        if (game->event.type == sfEvtMouseButtonPressed) {
            button_exit(game);
            button_pause(game);
            change_position_fox(game);
            condition_square(game, &game->var);
        }
    }
}
