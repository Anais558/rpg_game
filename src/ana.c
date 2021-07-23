/*
** EPITECH PROJECT, 2021
** ana.c
** File description:
** next
*/
#include "../include/rpg.h"

void next(game *menu)
{
    if (menu->i == 0)
        menu_haha(menu, menu->i);
    if (menu->i == 1)
        print_after_start(menu, menu->i);
    if (menu->i == 2)
        print_after_opt(menu, menu->i);
    if (menu->i == 3)
        print_map(menu, menu->i);
    if (menu->i == 4)
        pause_game(menu, menu->i);
    if (menu->i == 6)
        alex(menu, menu->i);
}