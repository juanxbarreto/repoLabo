/*
 ============================================================================
 Name        : ejercicio3-3.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "juanlib.h"

int main(){
	setbuf(stdout, NULL);

	scanint(1,100);
	scanfloat(1,100);


	return EXIT_SUCCESS;
}


/*
int par(int);
int numero;
int resultado_par;

int main()
{
	setbuf(stdout, NULL);
    printf("Ingrese un numero: ");
    scanf(" %d", &numero);
    resultado_par=par(numero);
    return EXIT_SUCCESS;
}

int par(int n){
    if(n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
*/





