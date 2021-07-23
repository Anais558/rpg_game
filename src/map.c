/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-sena.adonon
** File description:
** map.c
*/

#include "../include/rpg.h"

void print_map(game *menu, int i)
{
    menu->c = 2200;
    menu->d = 100;
    menu->sprite8 = sfSprite_create();
    menu->sprite9 = sfSprite_create();
    menu->sprite13 = sfSprite_create();
    menu->sprite14 = sfSprite_create();
    menu->texture8 = sfTexture_createFromFile("image/guy.png", NULL);
    menu->texture9 = sfTexture_createFromFile("image/dial.png", NULL);
    menu->texture13 = sfTexture_createFromFile("image/inv.png", NULL);
    menu->texture14 = sfTexture_createFromFile("image/pause.png", NULL);
    sfSprite_setTexture(menu->sprite8, menu->texture8, sfTrue);
    sfSprite_setTexture(menu->sprite9, menu->texture9, sfTrue);
    sfSprite_setTexture(menu->sprite13, menu->texture13, sfTrue);
    sfSprite_setTexture(menu->sprite14, menu->texture14, sfTrue);
    sfRenderWindow_clear(menu->window, sfBlack);
    sfSprite_setPosition(menu->sprite5, (sfVector2f){menu->a, menu->b});
    sfSprite_setPosition(menu->sprite7, (sfVector2f){menu->c, menu->d});
    sfSprite_setPosition(menu->sprite8, (sfVector2f){menu->e, menu->f});
    sfSprite_setPosition(menu->sprite18, (sfVector2f){menu->g, menu->h});
    sfSprite_setPosition(menu->sprite19, (sfVector2f){menu->j, menu->k});
    sfSprite_setPosition(menu->sprite20, (sfVector2f){menu->l, menu->m});
    sfSprite_setPosition(menu->sprite13, (sfVector2f){1250, 50});
    sfSprite_setPosition(menu->sprite14, (sfVector2f){1300, 50});
    while (sfRenderWindow_pollEvent(menu->window, &menu->event))
    {
        if (menu->event.type == sfEvtClosed ||
        sfKeyboard_isKeyPressed(sfKeyQ))
            sfRenderWindow_close(menu->window);
    }
    menu->time2 = sfClock_getElapsedTime(menu->clock2);
    menu->time4 = sfClock_getElapsedTime(menu->clock4);
    menu->seconds2 = menu->time2.microseconds / 1000000.0;
    menu->seconds4 = menu->time4.microseconds / 1000000.0;

    if (menu->seconds4 > 0.1f)
    {
        if (menu->rect4.left >= 570)
            menu->rect4.left = 0;
        else
            menu->rect4.left += 195;
        sfClock_restart(menu->clock4);
    }
    menu->c += 0.6;
    if (menu->c == 310)
    menu->c = 300;
    if (get_position2(menu->sprite13, menu->window) &&
    sfMouse_isButtonPressed(sfMouseLeft))
        sfSprite_setScale(menu->sprite13, (sfVector2f){1.1, 1.1});
    if (get_position2(menu->sprite14, menu->window) &&
    sfMouse_isButtonPressed(sfMouseLeft))
        sfSprite_setScale(menu->sprite14, (sfVector2f){1.1, 1.1});

    sfRenderWindow_drawSprite(menu->window, menu->sprite4, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->sprite5, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->sprite13, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->sprite14, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->sprite8, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->sprite18, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->sprite19, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->sprite20, NULL);
    sfSprite_setTextureRect(menu->sprite4, menu->rect2);
    sfSprite_setTextureRect(menu->sprite5, menu->rect3);
    sfSprite_setTextureRect(menu->sprite7, menu->rect4);
    sfSprite_setTextureRect(menu->sprite18, menu->rect5);
    sfSprite_setTextureRect(menu->sprite19, menu->rect6);
    sfSprite_setTextureRect(menu->sprite20, menu->rect7);

        if ((menu->a >= menu->e && menu->a <= menu->e + 10) &&
        (menu->b >= menu->f && menu->b <= menu->f + 10)) {
        sfSprite_setPosition(menu->sprite9, (sfVector2f){200, 500});
        sfRenderWindow_drawSprite(menu->window, menu->sprite9, NULL);
        menu->my_text12 = create_text("I lost my sister !!!",
        "font/The Baby Monster.ttf", 15, (sfVector2f){250, 550});
        sfText_setColor(menu->my_text, sfBlack);
        sfRenderWindow_drawText(menu->window, menu->my_text12, NULL);
    }
    sfRenderWindow_display(menu->window);
}
