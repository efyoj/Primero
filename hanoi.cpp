/*
 * =====================================================================================
 *
 *       Filename:  hanoi.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/02/15 09:23:00
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
#include "stack.h"

int main(int argc, char *argv[]){
    int piso;

    printf("Introduce cuantos pisos quieres:");
    scanf(" %i", &piso);

    Stack *inicio = create_stack(piso);
    Stack *fin = create_stack(piso);
    Stack *aux = create_stack(piso);

    for(int i=piso; i >= 0; i--)
	push(i, inicio);

    do{

    }while(fin->summit-1 == piso);

    destroy_stack(inicio);
    destroy_stack(aux);
    destroy_stack(fin);

    return EXIT_SUCCESS;

}
