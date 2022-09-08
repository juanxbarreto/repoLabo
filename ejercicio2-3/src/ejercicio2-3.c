/*
 ============================================================================
 Name        : ejercicio2-3.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numero;


int main(void) {
	setbuf(stdout, NULL);

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	if(numero % 2 == 0){
		printf("El numero %d es par!", numero);
	}else{
		printf("El numero %d es impar!", numero);
	}

	return EXIT_SUCCESS;
}
