/*
 * =====================================================================================
 *
 *       Filename:  struct.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/02/15 14:04:01
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

#define N 10

typedef struct THabilidad {
    int fuerza;
    int resistencia;
    int velocidad;
}Habilidad;

struct TJugador {
    char nombre[0x100];
    Habilidad habilidad;
    int dinero;
    int puntos;
};

void rellenar(struct TJugador jugador[N]){
    for(int i = 0; i< N; i++){
	printf("Introduce el nombre del jugador %i", i+1);
	gets(jugador[i].nombre);
	printf("Introduce su fuerza");
	scanf("%i", jugador[i].Habilidades.fuerza);
	printf("Introduce su resistencia");
	scanf("%i", jugador[i].Habilidades.resistencia);
	printf("Introduce su velocidad");
	scanf("%i", jugador[i].Habilidades.velocidad);
	printf("Introduce su dinero");
	scanf("%i", jugador[i].dinero);
	printf("Introduce su puntos");
	scanf("%i", jugador[i].puntos);
    }
int main(int argc, char *argv[]){

    struct TJugador jugador[N];
    FILE* hoja;

    if((hoja = fopen("hoja.bin", "wb")) == NULL){
	rellenar(jugador);
    }

    else{
	fread(jugador, sizeof(struct TJugador), N, hoja);
	fclose(hoja);
    }

	
    }

    return EXIT_SUCCESS;

}
