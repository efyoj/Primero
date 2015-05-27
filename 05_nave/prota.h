/*
 * =====================================================================================
 *
 *       Filename:  prota.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/05/15 10:42:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alvaro Mathe (AM), mathe_4_9@hotmail.com
 *        Company:  DAM
 *
 * =====================================================================================
 */

#ifndef __PROTA_H__
#define __PROTA_H__
#include "nave.h"
#include "arma.h"
class Prota : public Nave
{
    private:
	double fuel;
	int vidas;
	Arma armas[];
	int arma_activa;
};
#endif
