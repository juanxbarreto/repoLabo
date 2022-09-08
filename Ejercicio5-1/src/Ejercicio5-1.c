/*
 ============================================================================
 Name        : Ejercicio5-1.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Pedir 5 números enteros, guardarlos en un Array. Calcular la sumatorio
de los mismos y mostrar los impares ingresados.
 */

#include <stdio.h>
#include <stdlib.h>
#define tam 5

int suma=0;
int numero;
int array[tam];

int main(void) {
	setbuf(stdout, NULL);
	for(int i=0;i<tam;i++){
		printf("\nIngrese el %d numero: ", i+1);
		scanf("%d", &numero);
		array[i]=numero;
		suma+=array[i];
		if(array[i]%2 != 0){
			printf("\nEl numero %d es impar!", array[i]);
		}
	}
	printf("\nLa suma de los numeros ingresados es: %d", suma);
	return EXIT_SUCCESS;
}
