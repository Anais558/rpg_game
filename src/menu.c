/*
** EPITECH PROJECT, 2021
** menu.c
** File description:
** menu
*/

#include "../include/rpg.h"

void print_start(game *menu, int i)
{
    menu->my_text1 = create_text("Play", "font/Monster.ttf", 50,
    (sfVector2f){100, 300});
    sfText_setColor(menu->my_text1, sfBlack);
    color(menu->my_text1, menu->window);
    color2(menu->my_text1, sfGreen, sfBlack, menu->window);
    sfRenderWindow_drawText(menu->window, menu->my_text1, NULL);
    if (get_position(menu->my_text1, menu->window) &&
    sfMouse_isButtonPressed(sfMouseLeft) && menu->i == 0) {
        sfRenderWindow_clear(menu->window, sfBlack);
        menu->i = 1;
    }
}

void print_option(game *menu, int i)
{
    menu->my_text2 = create_text("How to play", "font/Monster.ttf", 50,
    (sfVector2f){100, 400});
    sfText_setColor(menu->my_text2, sfBlack);
    color(menu->my_text2, menu->window);
    color2(menu->my_text2, sfGreen, sfBlack, menu->window);
    sfRenderWindow_drawText(menu->window, menu->my_text2, NULL);
    if (get_position(menu->my_text2, menu->window) &&
    sfMouse_isButtonPressed(sfMouseLeft) && menu->i == 0) {
        sfRenderWindow_clear(menu->window, sfBlack);
        menu->i = 2;
    }
}

void print_quit(game *menu, int i)
{
    menu->my_text3 = create_text("Quit game", "font/Monster.ttf", 50,
    (sfVector2f){100, 500});
    sfText_setColor(menu->my_text3, sfBlack);
    color(menu->my_text3, menu->window);
    color2(menu->my_text3, sfGreen, sfBlack, menu->window);
    sfRenderWindow_drawText(menu->window, menu->my_text3, NULL);
    if (get_position(menu->my_text3, menu->window) &&
    sfMouse_isButtonPressed(sfMouseLeft) && menu->i == 0) {
        sfRenderWindow_close(menu->window);
    }
}

void back(game *menu, int i)
{
    menu->spritebk = sfSprite_create();
    menu->texturebk = sfTexture_createFromFile("image/back.png", NULL);
    sfSprite_setTexture(menu->spritebk, menu->texturebk, sfTrue);
    sfSprite_setScale(menu->spritebk, (sfVector2f){1, 0.5});
}

void menu_haha(game *menu, int i)
{
    menu->sprite = sfSprite_create();
    menu->my_text = create_text("THE LEGEND OF ZELDA",
    "font/The Baby Monster.ttf", 80, (sfVector2f){300, 50});
    sfText_setColor(menu->my_text, sfBlack);
    menu->texture = sfTexture_createFromFile("image/essai.png", NULL);
    sfSprite_setTexture(menu->sprite, menu->texture, sfTrue);
    sfRenderWindow_drawSprite(menu->window, menu->sprite, NULL);
    sfRenderWindow_drawText(menu->window, menu->my_text, NULL);
    back(menu, i);
    print_start(menu, i);
    print_option(menu, i);
    print_quit(menu, i);
    sfRenderWindow_display(menu->window);
}
