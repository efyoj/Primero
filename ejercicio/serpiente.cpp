/*
 * =====================================================================================
 *
 *       Filename:  serpiente.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/12/14 13:24:10
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

    /* Preguntar helado*/
    printf("Dime el lado: ");
    scanf("%i", &lado);

    /* Pintar cada fila*/
    for(int fila = 0; fila < lado; fila++){
	/* Pintar todos los cuadrados */
	for(int cuadrado = 0; cuadrado < lado; cuadrado++)
	    /*Pintar todas las columnas*/
	    /*if cuadrado != 0 col=1*/
	    if(cuadrado == 0)
		for (int col = 0; col<lado; col++)
		    /* Decidir si va asterisco o espacio */
		    if (cuadrado % 2 == 0)
			if (fila == col)
			    printf("*");
			else
			    printf(" ");
		    else
			if (fila+col == lado-1)
			    printf("*");
			else
			    printf(" ");
	    else
		for(int col = 1; col<lado; col++)
		    if (cuadrado % 2 == 0)
			if (fila == col)
			    printf("*");
			else
			    printf(" ");
		    else
			if (fila+col == lado-1)
			    printf("*");
			else
			    printf(" ");
	/* Poner un salto de linea */
	printf ("\n");
    }       

    return EXIT_SUCCESS;

}
