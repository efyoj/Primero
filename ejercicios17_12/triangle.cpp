/*
 * =====================================================================================
 *
 *       Filename:  triangle.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/12/14 09:59:57
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
    
    int altura = 0;

    printf("Dime la altura:\n");
    scanf("%i", &altura);

    for(int i = 0; i < altura; i++){
	for(int o = 0; o <= i; o++)
	    printf("%s", argv[1]);
	printf("\n");
    }

    return EXIT_SUCCESS;

}
