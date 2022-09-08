/*
 ============================================================================
 Name        : ejercicio3-6-Barreto.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int variable1;
int realizarDescuento(int);
int precio_final;

int main(void) {
	setbuf(stdout, NULL);

	do{
	printf("Ingrese un numero: [Entre 10 y 100]");
	scanf("%d", &variable1);
	}while(variable1 < 10 || variable1 > 100);

	precio_final=realizarDescuento(variable1);

	printf("El precio es %d con un descuento de 5 porciento queda en: %d", variable1, precio_final);

	return EXIT_SUCCESS;
}

int realizarDescuento(int var){
	int resultado;
	resultado=var-(int)(var*0.05);
	return resultado;
}
