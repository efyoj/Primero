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
    suma = add(atof(argv[1]),atof(argv[2]));

    printf("%lg\n", suma);

    return EXIT_SUCCESS;

}
