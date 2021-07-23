/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-sena.adonon
** File description:
** position.c
*/

#include "../include/rpg.h"

int get_position(sfText *text, sfRenderWindow *window)
{
    sfFloatRect rect = sfText_getGlobalBounds(text);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x >= rect.left && mouse.x <= rect.left + rect.width && \
    mouse.y >= rect.top && mouse.y <= rect.top + rect.height)
        return (1);
    return (0);
}

int get_position2(sfSprite *sprite, sfRenderWindow *window)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x >= rect.left && mouse.x <= rect.left + rect.width && \
    mouse.y >= rect.top && mouse.y <= rect.top + rect.height)
        return (1);
    return (0);
}

/*int get_position3(sfSprite *sprite, sfSprite *sprite2)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite);
        sfFloatRect rect = sfSprite_getGlobalBounds(sprite);
    

    if (mouse.x >= rect.left && mouse.x <= rect.left + rect.width && \
    mouse.y >= rect.top && mouse.y <= rect.top + rect.height)
        return (1);
    return (0);
}*/

void forback(game *menu, sfVector2f position)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(menu->window);
    if (mouse.x >= position.x && mouse.x <= position.x + 150
        && mouse.y >= position.y && mouse.y <= position.y + 50
        && menu->i == 2 && sfMouse_isButtonPressed(sfMouseLeft)) {
        menu->i = 0;
    }
}
