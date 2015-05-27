/*
 * =====================================================================================
 *
 *       Filename:  nave.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/05/15 10:42:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alvaro Mathe (AM), mathe_4_9@hotmail.com
 *        Company:  DAM
 *
 * =====================================================================================
 */

#ifndef __NAVE_H__
#define __NAVE_H__
#include <allegro5/allegro.h>
class Nave
{
    private:
	double x;
	double y;
	double vx;
	double vy;
	double energia;
	ALLEGRO_BITMAP *dibujo;
    public:
	Nave ();
	Nave (double x, double y);
	double get_x ();
	double get_y ();
	double set_x ();
	double set_y ();
	int get_sprite_number ();
	/*  Mutadores */
       void actualizate ();
void change_vx (float delta);
void change_vy (float delta);
void move ();
ALLEGRO_BITMAP *get_dibujo ();
void set_dibujo (ALLEGRO_BITMAP * sprite);
};
#endif
