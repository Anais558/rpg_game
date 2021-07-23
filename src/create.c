/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-sena.adonon
** File description:
** create.c
*/
#include "../include/rpg.h"

sfText *create_text(char *str, char *file, int size, sfVector2f pos)
{
    sfText *text;
    sfFont *font;

    text = sfText_create();
    font = sfFont_createFromFile(file);
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    sfText_setPosition(text, pos);
    return (text);
}

void color(sfText *text, sfRenderWindow *window)
{
    if (get_position(text, window))
        sfText_setScale(text, (sfVector2f){1.1, 1.1});
    else
        sfText_setScale(text, (sfVector2f){1, 1});
}

void color2(sfText *text, sfColor bord, sfColor font, sfRenderWindow *window)
{
    if (get_position(text, window)) {
        sfText_setColor(text, font);
        sfText_setOutlineThickness(text, 10);
        sfText_setOutlineColor(text, bord);
    } else {
        sfText_setColor(text, sfBlack);
        sfText_setOutlineThickness(text, 0);
        sfText_setOutlineColor(text, sfBlack);
    }
}

sfSprite *create_sprite_rect(char *file, sfIntRect rect)
{
    sfSprite *sprite;
    sfTexture *texture;

    sprite = sfSprite_create();
    texture = sfTexture_createFromFile(file, NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}