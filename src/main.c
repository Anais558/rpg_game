/*
** EPITECH PROJECT, 2021
** create.c
** File description:
** create
*/

#include "../include/rpg.h"

int main(int ac, char **av)
{
    game *menu = malloc(sizeof(game));
    menu->mode = (sfVideoMode){1920, 1080, 32};

    menu->window = sfRenderWindow_create(menu->mode, "THE LEGEND OF ZELDA",
                                         sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(menu->window, 60);
    create_window(menu);
    destroy(menu);
    free(menu);
    return (0);
}

void create_window(game *menu)
{
    menu->i = 0;
    menu->rect.top = 0;
    menu->rect.left = 0;
    menu->rect.width = 20;
    menu->rect.height = 32;
    menu->rect2.top = 0;
    menu->rect2.left = 0;
    menu->rect2.width = 1920;
    menu->rect2.height = 1080;
    menu->rect3.top = 0;
    menu->rect3.left = 0;
    menu->rect3.width = 24;
    menu->rect3.height = 32;
    menu->rect4.top = 161;
    menu->rect4.left = 0;
    menu->rect4.width = 191;
    menu->rect4.height = 161;
    menu->rect5.top = 0;
    menu->rect5.left = 0;
    menu->rect5.width = 29;
    menu->rect5.height = 34;
    menu->rect6.top = 0;
    menu->rect6.left = 0;
    menu->rect6.width = 29;
    menu->rect6.height = 34;
    menu->rect7.top = 0;
    menu->rect7.left = 0;
    menu->rect7.width = 32;
    menu->rect7.height = 50;
    menu->a = 150;
    menu->b = 600;
    menu->e = 100;
    menu->f = 500;
    menu->g = 200;
    menu->h = 300;
   // menu->i = 500;
    menu->j = 650;
    menu->k = 600;
    menu->l = 500;
    menu->m = 500;
    menu->clock = sfClock_create();
    menu->clock2 = sfClock_create();
    menu->clock3 = sfClock_create();
    menu->clock4 = sfClock_create();
    menu->clock5 = sfClock_create();
    menu->clock6 = sfClock_create();
    menu->clock7 = sfClock_create();
    menu->my_text2 = create_text("Chargement...", "font/Monster.ttf", 40,
                                 (sfVector2f){500, 350});
    menu->sprite2 = create_sprite_rect("image/rect.png", menu->rect);
    menu->sprite4 = create_sprite_rect("image/Image22.png", menu->rect2);
    menu->sprite7 = create_sprite_rect("image/dragon.png", menu->rect4);
    menu->sprite18 = create_sprite_rect("image/mimir.png", menu->rect5);
    menu->sprite19 = create_sprite_rect("image/mimil.png", menu->rect6);
    menu->sprite20 = create_sprite_rect("image/bise.png", menu->rect7);
    clic(menu);
    soundground(menu);
    while (sfRenderWindow_isOpen(menu->window))
    {
        sfRenderWindow_clear(menu->window, sfBlack);
        menu->sprite5 = create_sprite_rect("image/anaf.png", menu->rect3);
        while (sfRenderWindow_pollEvent(menu->window, &menu->event))
        {
            if (menu->event.type == sfEvtClosed)
                sfRenderWindow_close(menu->window);
            if (sfKeyboard_isKeyPressed(sfKeyEscape) ||
                (sfMouse_getPositionRenderWindow(menu->window).x >= 1300) &&
                    (sfMouse_getPositionRenderWindow(menu->window).x <= 1310) &&
                    (sfMouse_getPositionRenderWindow(menu->window).y >= 50) &&
                    (sfMouse_getPositionRenderWindow(menu->window).y < 60))
                menu->i = 4;
            if (menu->event.type == sfEvtMouseButtonPressed)
                sfSound_play(menu->clicsound);
            if (sfKeyboard_isKeyPressed(sfKeyV))
                sfSound_setVolume(menu->sound, 10.5);
            else if (sfKeyboard_isKeyPressed(sfKeyP))
                sfSound_setVolume(menu->sound, 60);
        }
        next(menu);
        menu->time3 = sfClock_getElapsedTime(menu->clock3);
        menu->seconds3 = menu->time3.microseconds / 1000000.0;
        menu->time5 = sfClock_getElapsedTime(menu->clock5);
        menu->seconds5 = menu->time5.microseconds / 1000000.0;
        menu->time6 = sfClock_getElapsedTime(menu->clock6);
        menu->seconds6 = menu->time6.microseconds / 1000000.0;
        menu->time7 = sfClock_getElapsedTime(menu->clock7);
        menu->seconds7 = menu->time7.microseconds / 1000000.0;

        if (menu->seconds6 > 0.2f) {
            if (menu->rect6.left >= 55)
                menu->rect6.left = 0;
            else
                menu->rect6.left += 32;
            sfClock_restart(menu->clock6);
        }
        menu->j -= 0.4;
        if (menu->seconds7 > 0.2f) {
            if (menu->rect7.left >= 55)
                menu->rect7.left = 0;
            else
                menu->rect7.left += 32;
            sfClock_restart(menu->clock7);
        }
        menu->l += 0.4;
        if (menu->seconds5 > 0.2f) {
            if (menu->rect5.left >= 58)
                menu->rect5.left = 0;
            else
                menu->rect5.left += 29;
            sfClock_restart(menu->clock5);
        }
        menu->g += 0.4;
        if (sfKeyboard_isKeyPressed(sfKeyRight) && menu->seconds3 > 0.01f)
        {
            menu->rect2.left += 2;
            menu->rect2.width += 2;

            if (menu->rect3.left >= 288)
                menu->rect3.left = 0;
            else
                menu->rect3.left += 24;
            sfClock_restart(menu->clock3);
            menu->e -= 2;
            menu->g -= 2;
            menu->j -= 2;
            menu->l -= 2;
        }
        if (sfKeyboard_isKeyPressed(sfKeyLeft) && menu->seconds3 > 0.01f)
        {
            menu->rect2.left -= 2;
            menu->rect2.width -= 2;

            if (menu->rect3.left >= 864)
                menu->rect3.left = 576;
            else
                menu->rect3.left += 24;
            sfClock_restart(menu->clock3);
            menu->e += 2;
            menu->g += 2;
            menu->j += 2;
            menu->l += 2;
        }
        if (sfKeyboard_isKeyPressed(sfKeyDown) && menu->seconds3 > 0.01f)
        {
            menu->rect2.top += 2;
            menu->rect2.height += 2;

            if (menu->rect3.left >= 1152)
                menu->rect3.left = 864;
            else
                menu->rect3.left += 24;
            sfClock_restart(menu->clock3);
            menu->f -= 2;
            menu->h -= 2;
            menu->k -= 2;
            menu->m -= 2;
        }
        if (sfKeyboard_isKeyPressed(sfKeyUp) && menu->seconds3 > 0.01f)
        {
            menu->rect2.top -= 2;
            menu->rect2.height -= 2;

            if (menu->rect3.left >= 576)
                menu->rect3.left = 288;
            else
                menu->rect3.left += 24;
            sfClock_restart(menu->clock3);
            menu->f += 2;
            menu->h += 2;
            menu->k += 2;
            menu->m += 2;
        }
    }
}