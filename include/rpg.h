/*
** EPITECH PROJECT, 2020
** prototypes
** File description:
** defender
*/

#ifndef DEFENDER_H
#define DEFENDER_H

#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <stdio.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Window.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include <stdlib.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>

typedef struct elem
{
    sfRenderWindow *window;
    sfSound *sound;
    sfSound *sound1;
    sfSound *clicsound;
    sfSoundBuffer *soundbuffer;
    sfSoundBuffer *soundbuffer1;
    sfSoundBuffer *clicsoundbuffer;
    sfTexture *texture1;
    sfTexture *texture2;
    sfTexture *texture;
    sfTexture *texture3;
    sfTexture *texture4;
    sfTexture *texture5;
    sfTexture *texture6;
    sfTexture *texture8;
    sfTexture *texture9;
    sfTexture *texture10;
    sfTexture *texture13;
    sfTexture *texture14;
    sfTexture *texture15;
    sfTexture *texture16;
    sfTexture *texture18;
    sfTexture *texture19;
    sfTexture *texture20;
    sfTexture *texturebk;
    sfSprite *spritebk;
    sfSprite *sprite1;
    sfSprite *sprite2;
    sfVideoMode mode;
    sfSprite *sprite;
    sfSprite *sprite3;
    sfSprite *sprite4;
    sfSprite *sprite5;
    sfSprite *sprite6;
    sfSprite *sprite7;
    sfSprite *sprite8;
    sfSprite *sprite9;
    sfSprite *sprite10;
    sfSprite *sprite11;
    sfSprite *sprite12;
    sfSprite *sprite13;
    sfSprite *sprite14;
    sfSprite *sprite15;
    sfSprite *sprite16;
    sfSprite *sprite18;
    sfSprite *sprite19;
    sfSprite *sprite20;
    sfText *my_text;
    sfText *my_text1;
    sfText *my_text2;
    sfText *my_text3;
    sfText *my_text4;
    sfText *my_text5;
    sfText *my_text6;
    sfText *my_text7;
    sfText *my_text8;
    sfText *my_text9;
    sfText *my_text10;
    sfText *my_text11;
    sfText *my_text12;
    sfEvent event;
    sfClock *clock;
    sfClock *clock2;
    sfClock *clock3;
    sfClock *clock4;
    sfClock *clock5;
    sfClock *clock6;
    sfClock *clock7;
    sfTime time;
    sfTime time2;
    sfTime time3;
    sfTime time4;
    sfTime time5;
    sfTime time6;
    sfTime time7;
    sfIntRect rect;
    sfIntRect rect2;
    sfIntRect rect3;
    sfIntRect rect4;
    sfIntRect rect5;
    sfIntRect rect6;
    sfIntRect rect7;
    int i;
    float seconds;
    float seconds2;
    float seconds3;
    float seconds4;
    float seconds5;
    float seconds6;
    float seconds7;
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    float h;
    float j;
    float k;
    float l;
    float m;
    float n;
    float o;
    float p;
    float q;
    float r;
    float s;
    float t;
    float u;
    float v;
    float w;
    float x;
    float y;
    float z;
} game;

void print_settings(game *menu, int i);
void destroy_load(game *menu);
void color2(sfText *text, sfColor bord, sfColor font, sfRenderWindow *window);
void print_after_opt(game *menu, int i);
void print_option(game *menu, int i);
void show_window(game *menu);
void print_map(game *menu, int i);
void map_init(game *menu);
void menu_window(game *menu);
void map_display(game *menu);
void menu_init(game *menu);
void menu_init2(game *menu);
void menu_evt(game *menu);
void print_resume(game *menu, int i);
void print_back(game *menu, int i);
void print_exit(game *menu, int i);
void pause_game(game *menu, int i);
void next(game *menu);
void soundground1(game *bam);
int get_position2(sfSprite *sprite, sfRenderWindow *window);
int get_position3(sfSprite *sprite, sfSprite *sprite2);
void sprite_create(game *menu);
void destroy(game *menu);
void menu_display(game *menu);
void alex(game *menu, int i);
int get_position(sfText *text, sfRenderWindow *window);
sfText *create_text(char *str, char *file, int size, sfVector2f pos);
void color(sfText *text, sfRenderWindow *window);
void draw_load(game *menu);
void init_struct(game *menu);
void map_window(game *menu);
void color2(sfText *text, sfColor bord, sfColor font, sfRenderWindow *window);
sfSprite *create_sprite_rect(char *file, sfIntRect rect);
void create_window(game *window);
void menu_haha(game *menu, int i);
void init(game *menu, int i);
void print_after_start(game *menu, int i);
void print_after_load(game *menu, int i);
void forback(game *menu, sfVector2f position);
void clic(game *bam);
void soundground(game *bam);
void destroy(game *menu);

#endif
