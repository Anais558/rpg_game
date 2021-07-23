/*
** EPITECH PROJECT, 2021
** pause.c
** File description:
** pause
*/

#include "../include/rpg.h"

void print_resume(game *menu, int i)
{
    menu->my_text6 = create_text("Resume", "font/Monster.ttf", 50,
    (sfVector2f){500, 100});
    sfText_setColor(menu->my_text6, sfBlack);
    color(menu->my_text6, menu->window);
    sfRenderWindow_drawText(menu->window, menu->my_text6, NULL);
    if (get_position(menu->my_text6, menu->window) &&
        sfMouse_isButtonPressed(sfMouseLeft) && menu->i == 4)
    {
        sfRenderWindow_clear(menu->window, sfBlack);
        menu->i = 3;
    }
}

void print_back(game *menu, int i)
{
    menu->my_text7 = create_text("Menu", "font/Monster.ttf", 50,
    (sfVector2f){500, 200});
    sfText_setColor(menu->my_text7, sfBlack);
    color(menu->my_text7, menu->window);
    sfRenderWindow_drawText(menu->window, menu->my_text7, NULL);
    if (get_position(menu->my_text7, menu->window) &&
        sfMouse_isButtonPressed(sfMouseLeft) && menu->i == 4)
    {
        sfRenderWindow_clear(menu->window, sfBlack);
        menu->i = 0;
    }
}

void print_exit(game *menu, int i)
{
    menu->my_text8 = create_text("Exit", "font/Monster.ttf", 50,
    (sfVector2f){500, 300});
    sfText_setColor(menu->my_text8, sfBlack);
    color(menu->my_text8, menu->window);
    sfRenderWindow_drawText(menu->window, menu->my_text8, NULL);
    if (get_position(menu->my_text8, menu->window) &&
        sfMouse_isButtonPressed(sfMouseLeft) && menu->i == 4)
    {
        sfRenderWindow_close(menu->window);
    }
}

void print_settings(game *menu, int i)
{
    menu->my_text12 = create_text("Settings", "font/Monster.ttf", 50,
    (sfVector2f){500, 400});
    sfText_setColor(menu->my_text12, sfBlack);
    color(menu->my_text12, menu->window);
    sfRenderWindow_drawText(menu->window, menu->my_text12, NULL);
    if (get_position(menu->my_text12, menu->window) &&
        sfMouse_isButtonPressed(sfMouseLeft)){
        sfRenderWindow_clear(menu->window, sfBlack);
        menu->i = 6;
        alex(menu, menu->i);}
}

void pause_game(game *menu, int i)
{
    menu->sprite6 = sfSprite_create();
    menu->texture6 = sfTexture_createFromFile("image/essai.png", NULL);
    sfSprite_setTexture(menu->sprite6, menu->texture6, sfTrue);
    sfRenderWindow_drawSprite(menu->window, menu->sprite6, NULL);
    print_resume(menu, i);
    print_back(menu, i);
    print_exit(menu, i);
    print_settings(menu, i);
    sfRenderWindow_display(menu->window);
}
