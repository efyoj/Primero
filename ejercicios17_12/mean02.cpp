/*
 * =====================================================================================
 *
 *       Filename:  mean02.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/12/14 09:40:42
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

    double media = 0;
    int operador = 0;

    for(int o=0; o<10; o++){
	printf("Introduce un número\n");
	scanf("%i",&operador);
	media += operador;
    }
    media /= 10;
    printf("\n La media es:");
    printf("%lg\n",media);

    return EXIT_SUCCESS;

}
