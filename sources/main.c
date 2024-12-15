/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

static void loop_main(game_t *game, score_t *score)
{
    while (sfRenderWindow_isOpen(game->window)) {
        analyse_event(game->window, game);
        animated_all_the_sprites(game);
        game->var_clock.seconds = sfTime_asSeconds(sfClock_getElapsedTime(game->var_clock.clock));
        game->var_clock.sec_attack = sfTime_asSeconds(sfClock_getElapsedTime(game->var_clock.clock_attack));
        sfRenderWindow_clear(game->window, sfBlack);
        if (game->menu == 1) {
            condition_menu(game);
        } else {
            conditions_in_game(game, score);
        }
        sfRenderWindow_display(game->window);
    }
}

int main(void)
{
    game_t *game = malloc(sizeof(game_t) + 2);
    sfVideoMode video_mode = {1200, 759, 32};
    game->var_clock.clock = sfClock_create();
    game->var_clock.clock_attack = sfClock_create();

    init_rect(game);
    init_variables(game);
    init_scale(game);
    create_sprite(game);
    set_scale(game);
    init_positions(game);
    // play_song(game);
    game->window = sfRenderWindow_create(video_mode,
    "MyDefender", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->window, 17);
    make_score(game, &(game->score));
    loop_main(game, &(game->score));
    destroy_all(game, &(game->score));
    return (0);
}
