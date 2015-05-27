/*
 * =====================================================================================
 *
 *       Filename:  arma.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/05/15 10:37:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alvaro Mathe (AM), mathe_4_9@hotmail.com
 *        Company:  DAM
 *
 * =====================================================================================
 */

#ifndef __ARMA_H__
#define __ARMA_H__
class Arma
{
    private:
	int ammo;
	int damage;
    public:
	void shoot();
	int get_ammo();
};
#endif
