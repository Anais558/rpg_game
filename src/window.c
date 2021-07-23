/*
** EPITECH PROJECT, 2020
** B-MUL-200-COT-2-1-myrpg-sena.adonon
** File description:
** window.c
*/
#include "../include/rpg.h"

void print_after_start(game *menu, int i)
{
    menu->sprite1 = sfSprite_create();
    menu->texture1 = sfTexture_createFromFile
    ("image/menu/chargement.png", NULL);
    sfSprite_setTexture(menu->sprite1, menu->texture1, sfTrue);
    menu->my_text2 = create_text
    ("Chargement...", "font/Monster.ttf", 40, (sfVector2f){570, 350});
        sfRenderWindow_clear(menu->window, sfBlack);
        sfSprite_setPosition(menu->sprite2, (sfVector2f){450, 450});
        while (sfRenderWindow_pollEvent(menu->window, &menu->event))
        {
            if (menu->event.type == sfEvtClosed ||
            sfKeyboard_isKeyPressed(sfKeyQ))
                sfRenderWindow_close(menu->window);
        }
        menu->time = sfClock_getElapsedTime(menu->clock);
        menu->seconds = menu->time.microseconds / 1000000.0;
        if (menu->seconds > 0.3f)
        {
            if (menu->rect.width < 461)
                menu->rect.width += 60;
            else
                menu->i = 3;
            sfClock_restart(menu->clock);
            sfSprite_setTextureRect(menu->sprite2, menu->rect);
        }
        sfRenderWindow_drawSprite(menu->window, menu->sprite1, NULL);
        sfRenderWindow_drawSprite(menu->window, menu->sprite2, NULL);
        sfRenderWindow_drawText(menu->window, menu->my_text2, NULL);
        sfRenderWindow_display(menu->window);
}

void print_after_opt(game *menu, int i)
{
    sfVector2f positionbk = {0, 550};
    menu->sprite3 = sfSprite_create();
    menu->texture3 = sfTexture_createFromFile
    ("image/menu/chargement.png", NULL);
    menu->my_text8 = create_text("Le but du jeu est d'aider Link par tout les moyens de retrouver sa soeur Zelda", "font/Monster.ttf", 20, (sfVector2f){100, 100});
    menu->my_text9 = create_text("Recolte des informations aupres des villageois et decouvre ou se trouve Zelda", "font/Monster.ttf", 20, (sfVector2f){100, 150});
    //menu->my_text10 = create_text("Deplace toi avec les touches de navigation ", );
    forback(menu, positionbk);
    sfSprite_setTexture(menu->sprite3, menu->texture3, sfTrue);
    sfRenderWindow_drawSprite(menu->window, menu->sprite3, NULL);
    sfRenderWindow_drawSprite(menu->window, menu->spritebk, NULL);
    sfRenderWindow_drawText(menu->window, menu->my_text8, NULL);
    sfRenderWindow_drawText(menu->window, menu->my_text9, NULL);
    sfSprite_setPosition(menu->spritebk, positionbk);
    sfRenderWindow_display(menu->window);
}