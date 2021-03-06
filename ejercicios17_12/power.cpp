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

    int elevado = 1;

    for(int i = 0; i<exponente; i++)
	elevado *=  base;
    return elevado;
}

void rellenar(int lista[N], int exponente){   
    for(int i = 0; i < N; i++)
	lista[i] = power(i+1,exponente);
}

void imprimir(int matriz[N]){
    for(int i=0; i<N; i++)
	printf("%3i ", matriz[i]);
    printf("\n");
}
int main(int argc, char *argv[]){

    int lista[N];

    if (argc < 2)
	return EXIT_FAILURE;

    rellenar(lista, atoi(argv[1]));
    imprimir(lista);

    return EXIT_SUCCESS;

}
