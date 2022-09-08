/*
 ============================================================================
 Name        : ejercicio3-2.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float ingreseFloat(void);
float numero_d;

int main(void) {
	setbuf(stdout, NULL);
    numero_d=ingreseFloat();
    printf("Se ingreso el numero %f", numero_d);
	return EXIT_SUCCESS;
}

float ingreseFloat(void){
    float numero;
    printf("ingrese un numero flotante: ");
    scanf("%f", &numero);
    return numero;
}
