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
	scanf("%i", &jugador[i].habilidad.fuerza);
	printf("Introduce su resistencia");
	scanf("%i", &jugador[i].habilidad.resistencia);
	printf("Introduce su velocidad");
	scanf("%i", &jugador[i].habilidad.velocidad);
	jugador[i].dinero = 0;
	jugador[i].puntos = 100;
    }
}

void actualizar(struct TJugador jugador[N]){
    for(int i = 0; i < N; i++){
	jugador[i].habilidad.fuerza +=3;
	jugador[i].habilidad.resistencia += 1;
	jugador[i].habilidad.velocidad += 2;
	jugador[i].dinero += 1000;
	jugador[i].puntos += 5000;
    }
}


int main(int argc, char *argv[]){

    struct TJugador jugador[N];
    FILE* hoja;

    if((hoja = fopen("hoja.bin", "wb")) == NULL){
	rellenar(jugador);
	fclose(hoja);
    }

    else{
	fread(jugador, sizeof(struct TJugador), N, hoja);
	fclose(hoja);
	actualizar(jugador);
    }




    return EXIT_SUCCESS;

}
