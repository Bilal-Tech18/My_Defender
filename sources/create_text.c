/*
** EPITECH PROJECT, 2022
** create_text.c
** File description:
** create_text
*/

#include "my.h"

void count_score(game_t *game)
{
    if (sfRenderWindow_isOpen(game->window)) {
        if (game->var_clock.seconds >= 1.0) {
            game->score.count += 25;
            sfClock_restart(game->var_clock.clock);
        }
        game->score.result = int_to_str(game->score.count);
    }
}

void set_score(game_t *game)
{
    sfText_setString(game->score.text, game->score.result);
}

void make_score(game_t *game, score_t *score)
{
    score->pos.x = 130;
    score->pos.y = -10;
    score->font = sfFont_createFromFile("sources/font.ttf");
    score->text = sfText_create();
    sfText_setFont(score->text, score->font);
    sfText_setString(score->text, score->result);
    set_score(game);
    sfText_setCharacterSize(score->text, 50);
    sfText_setColor(score->text, sfWhite);
    sfText_setPosition(score->text, score->pos);
}
