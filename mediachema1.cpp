/*
 * =====================================================================================
 *
 *       Filename:  mediachema.cpp
 *
 *    Description:  Ejercicio media hecho por Chema
 *
 *        Version:  1.0
 *        Created:  07/11/14 13:06:36
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
    int respuestas = 0;
    double suma = 0,
	   nuevo_numero = 0;

    system("clear");
    system("toilet -f pagga -Fborder -Fgay media");
    printf("Introduce numeros mayores que 0\n"
	    "para calcular la media.\n"
	    "Negativos para terminar.\n");

    while(nuevo_numero >= 0) {
	printf("Numero: ");
	scanf(" %lf", &nuevo_numero);
	if (nuevo_numero >=0) {
	    suma += nuevo_numero;
	    respuestas++;
	}
    }

    printf("\nLa media es: %lf\n", suma / respuestas);

    return EXIT_SUCCESS;

    }
