/*
 * =====================================================================================
 *
 *       Filename:  square.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/12/14 10:08:32
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

int main(int argc, char *argv[]){

    int ancho = 0;

    printf("Dime el ancho del cuadrado:\n");
    scanf("%i", &ancho);

    for(int fila = 0; fila < ancho; fila++){
	for(int col = 0; col < ancho; col++)
	    if(col == 0 || col == ancho - 1
		   || fila == 0 || fila == ancho -1 )
		printf("*");
	    else
		printf(" ");
	printf("\n");
    }

    return EXIT_SUCCESS;

}
