/*
 * =====================================================================================
 *
 *       Filename:  pares.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/11/14 12:55:23
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

#define N 5
int main(int argc, char *argv[]){
	
    int par[N];
    printf("+---+---+---+---+---+\n|");
    for(int i=0; i<N; i++){
    	par[i] = 2 * i ;
	printf(" %i |", par[i]);
    }
    printf("\n+---+---+---+---+---+\n");
    return EXIT_SUCCESS;

}
