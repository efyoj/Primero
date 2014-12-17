/*
 * =====================================================================================
 *
 *       Filename:  power.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/12/14 13:18:37
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

#define N 0x10

int power(int base, int exponente){

    int elevado = base;

    for(int i = 0; i<exponente; i++)
	elevado *=  base;
    return elevado;
}

int main(int argc, char *argv[]){

    int lista[N] = {};

    for(int i = 0; i < N; i++){
	power(lista[i], atoi(argv[1]));
	printf("%i", &power);
    }



    return EXIT_SUCCESS;

}
