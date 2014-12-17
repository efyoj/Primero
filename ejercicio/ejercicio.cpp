/*
 * =====================================================================================
 *
 *       Filename:  ejercicio.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  24/11/14 08:55:36
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
    
    system("figlet USUARIO");

    char nombre[20];
    int edad;
    int pares[10];

    printf("\nPor favor, introduzca su nombre de usuario:\n");
    gets (nombre);
    printf("Su usuario es: %s\n", nombre);
    printf("Introduce tu edad:\n");
    scanf("%i", &edad);

    if(edad < 18)
	printf("Tu edad es %i, y por lo tanto eres un pipiolo\n", edad);
    else
	printf("Tu edad es %i y por lo tanto eres un puto viejo\n", edad);
    for(int i = 0;i < 10; i++){
	pares[i] = i*2;
	printf("%i ", pares[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;

}
