/*
 * =====================================================================================
 *
 *       Filename:  ejercicio3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  26/11/14 13:10:36
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

#define C 9
int main(int argc, char *argv[]){

    int i = 0;

	for(int col = 0; col < C; col++){
	    for(int fila = 0; fila < C; i++, fila++){
		printf("%2i ", i);
	    }
	    printf("\n");
	}

    return EXIT_SUCCESS;

}
