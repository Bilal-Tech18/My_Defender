/*
** EPITECH PROJECT, 2022
** wallpaper.c
** File description:
** display a wallpaper
*/

#include "my.h"

sfSprite *wall_paper(char *path_wallpaper)
{
    sfTexture *texture;
    sfSprite *wallpaper;

    texture = sfTexture_createFromFile(path_wallpaper, NULL);
    wallpaper = sfSprite_create();
    sfSprite_setTexture(wallpaper, texture, sfTrue);
    return (wallpaper);
}
