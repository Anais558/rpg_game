/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-sena.adonon
** File description:
** time.c
*/

#include "../include/rpg.h"

void timee(game *menu, int *i)
{
    menu->time = sfClock_getElapsedTime(menu->clock);
    menu->seconds = menu->time.microseconds / 1000000.0;
    if (menu->seconds > 0.9f)
    {
        if (menu->rect.width < 461)
            menu->rect.width += 30;
        else if (menu->rect.width == 461)
            *i = 2;
        sfClock_restart(menu->clock);
        sfSprite_setTextureRect(menu->sprite2, menu->rect);
    }
}