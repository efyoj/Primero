/*
 * =====================================================================================
 *
 *       Filename:  master.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/01/15 12:12:38
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

    system ("figlet Mastermind");

    int *original[5];
    int *prueba[5];
    int contador = 0;
    int contador_correctas = 0;
    int contador_colocadas = 0;

    printf("Hola jugador 1, tu misión es introducir una clave de 5 cifras para bloquear la nave y asi derrocar a los rebeldes, tu rival tendra solo 10 intentas asique ponselo dificil.\n Cuando introduzca las cifras separalas con comas.\n");
    scanf("%i, %i, %i, %i, %i",
	    original[0], original[1], original[2], original[3], original[4]);
    system ("clear");

    printf("Hola jugador 2, tu misión es adivinar la clave de 5 cifras que ha introducido tú rival y desbloquear el ordenador y salvar la nave.\n	    Recuerda que al introducir la clave debes separarla cifras con comas");
    scanf("%i, %i, %i, %i, %i",
	    prueba[0], prueba[1], prueba[2], prueba[3], prueba[4]);
    do{
	for(int i=0; i<5; i++){
	    for(int j=0; j<5; j++){
		if(original[i] == prueba[j] && i==j)
		    contador_correctas++;
		if(original[i] == prueba[j] && i!=j)
		    contador_colocadas++;
		if(contador_correctas = 5){
		    printf("Has acertado el número y has salvado la nave");
		    break;
		}
		printf("Tienes %i bien colocadas", contador_correctas);
		printf("Tienes %i correctas pero mal colocadas",
			contador_colocadas);
	    }
	}
    contador++;
    }
    while(contador < 10);
    printf("No has descubierto la clave por lo que la nave se va a estrellar");
    return EXIT_SUCCESS;

}
