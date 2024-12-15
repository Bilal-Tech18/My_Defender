/*
** EPITECH PROJECT, 2022
** song.c
** File description:
** song
*/

#include "my.h"

void play_song(game_t *game)
{
    game->song = sfMusic_createFromFile("song/one_piece_song.ogg");
    sfMusic_setLoop(game->song, sfTrue);
    sfMusic_play(game->song);
}
