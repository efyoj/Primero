/*
 * =====================================================================================
 *
 *       Filename:  add07.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/12/14 10:28:58
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

double add(double op1, double op2){
    return op1 + op2;
}
int main(int argc, char *argv[]){

    double suma;
    double resultado = 0;
    int i = 1;
    while(i < argc){
	suma = resultado;
	resultado = add(suma,atof(argv[i]));
	i++;
    }

    printf("%lg\n", resultado);

    return EXIT_SUCCESS;

}
