/*
 * =====================================================================================
 *
 *       Filename:  mean03.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/12/14 09:50:28
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

    int contador;
    int operando;
    double media;

    do{
	printf("Introduce un numero:\n");
	scanf("%i", &operando);
	media += operando;
	contador++;
    }
    while(operando > 0);

    contador--;
    media /= contador;
    printf("\nTu media es: %lg\n", media);



    return EXIT_SUCCESS;

}
