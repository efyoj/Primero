/*
 * =====================================================================================
 *
 *       Filename:  game.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/05/15 10:38:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alvaro Mathe (AM), mathe_4_9@hotmail.com
 *        Company:  DAM
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "mi_allegro.h"
#include "prota.h"
#include "nave.h"
#define N 120
#define SPRITESHEET "/home/student/amathe/Imágenes/xenon2_sprites.png"
#define ENEMY "/home/student/amathe/Imágenes/xenon2_sprites_tiles_level2.png"
#define BG "/home/student/amathe/Imágenes/milky-way-galaxies-outer-space-stars-2656414-1024x768.png"

#define DELTA 0.25
enum
{ KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT };
    int
main (int argc, char **argv)
{
    Prota mi_nave;
    Nave enemigo;
    ALLEGRO_BITMAP *xenon_spritesheet = NULL;
    ALLEGRO_BITMAP *enemy_spritesheet = NULL;
    ALLEGRO_BITMAP *bg = NULL;
    bool tecla[4] = { false, false, false, false };
    srand (time (NULL));
    iniciar_allegro ();
    xenon_spritesheet = al_load_bitmap (SPRITESHEET);
    enemy_spritesheet = al_load_bitmap (ENEMY);
    bg = al_load_bitmap (BG);
    al_convert_mask_to_alpha(xenon_spritesheet, al_map_rgb(255, 0, 255));
    if (!xenon_spritesheet)
    {
	al_show_native_message_box (display, "Error", "Error",
		"No se ha podido crear el bitmap", NULL,
		ALLEGRO_MESSAGEBOX_ERROR);
	al_destroy_timer (timer);
	al_destroy_display (display);
	exit (EXIT_FAILURE);
    }
    mi_nave.set_dibujo (xenon_spritesheet);
    al_convert_mask_to_alpha(enemy_spritesheet, al_map_rgb(255, 0, 255));
    if (!enemy_spritesheet)
    {
	al_show_native_message_box (display, "Error", "Error",
		"No se ha podido crear el bitmap", NULL,
		ALLEGRO_MESSAGEBOX_ERROR);
	al_destroy_timer (timer);
	al_destroy_display (display);
	exit (EXIT_FAILURE);
    }
    enemigo.set_dibujo (enemy_spritesheet);
    al_convert_mask_to_alpha(bg, al_map_rgb(255, 0, 255));
    if (!bg)
    {
	al_show_native_message_box (display, "Error", "Error",
		"No se ha podido crear el bitmap", NULL,
		ALLEGRO_MESSAGEBOX_ERROR);
	al_destroy_timer (timer);
	al_destroy_display (display);
	exit (EXIT_FAILURE);
    }

    while (1)
    { /*  Buzz Lightyear */
	ALLEGRO_EVENT ev;
	ALLEGRO_TIMEOUT timeout;
	al_init_timeout (&timeout, 0.06);
	bool get_event = al_wait_for_event_until (event_queue, &ev, &timeout);
	if (get_event)
	{
	    if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		break;
	    if (ev.type == ALLEGRO_EVENT_TIMER)
		redraw = true;
	    if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
	    {
		switch (ev.keyboard.keycode)
		{
		    case ALLEGRO_KEY_UP:
			tecla[KEY_UP] = true;
			break;
		    case ALLEGRO_KEY_DOWN:
			tecla[KEY_DOWN] = true;
			break;
		    case ALLEGRO_KEY_LEFT:
			tecla[KEY_LEFT] = true;
			break;
		    case ALLEGRO_KEY_RIGHT:
			tecla[KEY_RIGHT] = true;
			break;
		}
	    }
	    if (ev.type == ALLEGRO_EVENT_KEY_UP)
	    {
		switch (ev.keyboard.keycode)
		{
		    case ALLEGRO_KEY_UP:
			tecla[KEY_UP] = false;
			break;
		    case ALLEGRO_KEY_DOWN:
			tecla[KEY_DOWN] = false;
			break;
		    case ALLEGRO_KEY_LEFT:
			tecla[KEY_LEFT] = false;
			break;
		    case ALLEGRO_KEY_RIGHT:
			tecla[KEY_RIGHT] = false;
			break;
		}
	    }
	}
	/*  Actualizar las coordenadas de la pelota */
	if (tecla[KEY_UP])
	    mi_nave.change_vy(-DELTA);
	if (tecla[KEY_DOWN])
	    mi_nave.change_vy(DELTA);
	if (tecla[KEY_LEFT])
	    mi_nave.change_vx(-DELTA);
	if (tecla[KEY_RIGHT])
	    mi_nave.change_vx(DELTA);
	mi_nave.actualizate();
	if (redraw && al_is_event_queue_empty (event_queue))
	{
	    al_clear_to_color (al_map_rgb (0, 0, 0));
	    al_draw_bitmap_region (bg,0,0,1024,768,0,0,0);
	    al_draw_bitmap_region (mi_nave.get_dibujo (),
		    mi_nave.get_sprite_number() * 33, 99,
		    32, 27,
		    mi_nave.get_x (),
		    mi_nave.get_y (), 0);
	    enemigo.move();
	    al_draw_bitmap_region(enemigo.get_dibujo(),
		    enemigo.get_sprite_number() * 1, 33,
		    32, 32,
		    enemigo.get_x (),
		    enemigo.get_y (), 0);
	    al_flip_display ();
	    redraw = false;
	}
    }
    al_destroy_bitmap (xenon_spritesheet);
    destruir_allegro ();
    return 0;
}
