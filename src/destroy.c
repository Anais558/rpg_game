/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** rpg
*/

#include "../include/rpg.h"

void destroy(game *menu)
{
    sfSoundBuffer_destroy(menu->soundbuffer);
    sfSound_destroy(menu->sound);
    sfSoundBuffer_destroy(menu->clicsoundbuffer);
    sfSound_destroy(menu->clicsound);
}