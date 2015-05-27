/*
 * =====================================================================================
 *
 *       Filename:  mi_allegro.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/05/15 10:40:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alvaro Mathe (AM), mathe_4_9@hotmail.com
 *        Company:  DAM
 *
 * =====================================================================================
 */

#ifndef __MI_ALLEGRO_H__
#define __MI_ALLEGRO_H__
#include <stdlib.h>
#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
const float FPS = 60;
extern ALLEGRO_EVENT_QUEUE *event_queue;
extern ALLEGRO_DISPLAY *display;
extern ALLEGRO_TIMER *timer;
extern bool redraw;
#ifdef __cplusplus
extern "C"
{
#endif
    void iniciar_allegro ();
    void destruir_allegro ();
#ifdef __cplusplus
}
#endif
#endif
