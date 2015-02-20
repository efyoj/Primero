/*
 * =====================================================================================
 *
 *       Filename:  prime.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18/12/14 12:01:51
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

#define N 70

void muestra(int matriz[N]){
    for(int i=0; i<N; i++)
	printf(" %4i", matriz[i]);
    printf("\n");
}

int main(int argc, char *argv[]){

    int primo[N];
    int phe = 1;     /* Primos que he encontrado */
    int candidato;

    primo[0]=2;
    candidato = primo[0] + 1;

    while(phe < N){
	bool es_primo = true;

	for(int p=0; p<phe; p++)
	    if(candidato % primo[p] == 0)
		es_primo = false;
	if(es_primo)
	    primo[phe++] = candidato;

	candidato++;
    }

    muestra(primo);

    return EXIT_SUCCESS;

}
