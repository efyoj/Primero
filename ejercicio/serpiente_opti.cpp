/*
 * =====================================================================================
 *
 *       Filename:  serpiente_opti.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/12/14 12:25:40
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
    int lado;
    int inicial;

    printf("lado> ");
    scanf("%i", &lado);

    for(int fila=0; fila<lado; fila++){
	for(int cuad=0; cuad<lado; cuad++){
	    if (cuad == 0)
		inicial = 0;
	    else
		inicial =1;
	    for(int col=inicial;col<lado;col++)
		if( (cuad%2 == 0 && fila == col) ||
			(cuad%2 == 1 && fila+col == lado-1))
		    printf("*");
		else
		    printf(" ");
	}
	printf("\n");
    }

    return EXIT_SUCCESS;

}
