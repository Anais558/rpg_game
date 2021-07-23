/*
** EPITECH PROJECT, 2021
** sound
** File description:
** defender
*/

#include "../include/rpg.h"

void clic(game *bam)
{
    bam->clicsoundbuffer = sfSoundBuffer_createFromFile("sound/bip.ogg");
    bam->clicsound = sfSound_create();
    sfSound_setBuffer(bam->clicsound, bam->clicsoundbuffer);
}

void soundground(game *bam)
{
    bam->soundbuffer = sfSoundBuffer_createFromFile("sound/generic.ogg");
    bam->sound = sfSound_create();
    sfSound_setBuffer(bam->sound, bam->soundbuffer);
    sfSound_play(bam->sound);
    sfSound_setLoop(bam->sound, sfTrue);
}