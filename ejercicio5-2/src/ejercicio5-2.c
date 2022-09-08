/*
 ============================================================================
 Name        : ejercicio5-2.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Hacer una función que calcule el promedio de los valores del Array que
recibe y me devuelva el promedio.

 */

#include <stdio.h>
#include <stdlib.h>
#define tam 2

float funcionProm(int notas[],int tamanio);
int notas[tam];
float promedio;
int nota;

int main(void) {
	setbuf(stdout, NULL);
	for(int i=0;i<tam;i++){
		printf("\nIngrese la %d nota: ", i+1);
		scanf("%d", &nota);
		notas[i]=nota;
	}
	promedio = funcionProm(notas, tam);
	printf("\nEl promedio de notas es de %f: ", promedio);
	return EXIT_SUCCESS;
}

float funcionProm(int notas[], int tamanio){
	float promedio=0;
	int suma=0;
	for(int i=0;i<tamanio;i++){
		suma+=notas[i];
	}
	promedio=(float)suma/tamanio;
	return promedio;
}
