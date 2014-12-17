/*
 * =====================================================================================
 *
 *       Filename:  ejercicio2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/11/14 09:50:59
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
#define L 9
int main(int argc, char *argv[]){
    
    printf("\n");

    for(int e = 0; e < L; e++){
    	for (int i = 0; i< C; i++)
	    if(e == 0 || e == L - 1 || i == 0 || i == C - 1 || e == i || i == C-e-1)
		printf("*");
	    else
		printf(" ");
	printf("\n");
    }

    printf("\n");

    return EXIT_SUCCESS;

}
