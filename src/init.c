/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-sena.adonon
** File description:
** init.c
*/

#include "../include/rpg.h"

void alex(game *menu, int i)
{
    menu->sprite15 = sfSprite_create();
    menu->sprite16 = sfSprite_create();
    menu->texture15 = sfTexture_createFromFile("image/vop.png", NULL);
    menu->texture16 = sfTexture_createFromFile("image/vom.png", NULL);
    sfSprite_setPosition(menu->sprite15, (sfVector2f){700, 200});
    sfSprite_setPosition(menu->sprite16, (sfVector2f){700, 400});
    sfSprite_setTexture(menu->sprite15, menu->texture15, sfTrue);
    sfSprite_setTexture(menu->sprite16, menu->texture16, sfTrue);
    sfRenderWindow_drawSprite(menu->window, menu->sprite15, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->sprite16, NULL);
}