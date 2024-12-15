/*
** EPITECH PROJECT, 2022
** basic_function.c
** File description:
** basic function for csfml
*/

#include "my.h"

void anime_sprite(sfIntRect *rect, int max_value, int length)
{
    if (rect->left < max_value - length)
        rect->left += length;
    else
        rect->left = 0;
}

sfSprite *sprite_create(char *path, sfSprite *sprite,
sfIntRect rect, sfTexture *texture)
{
    texture = sfTexture_createFromFile(path, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}
