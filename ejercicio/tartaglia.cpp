/*
 * =====================================================================================
 *
 *       Filename:  tartaglia.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/14 12:08:49
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

    int n = atoi(argv[1]);
    int matriz [n][n];

    for(int fila=0; fila<n; fila++){
	for(int col=0; col<n; col++)
	    if(col==0 && fila==0)
		matriz[fila][col]=1;
	    else if (col != 0 && fila==0)
		matriz[fila][col]=0;
	    else if (col==0)
		matriz[fila][col]=1;
	    else
		matriz[fila][col]=matriz[fila-1][col]+matriz[fila-1][col-1];
    }
    for(int i = 0; i<n; i++){
	for(int e = 0; e<n; e++)
	    printf(" %2i", matriz[i][e]);
	printf("\n");
    }

    return EXIT_SUCCESS;

}
