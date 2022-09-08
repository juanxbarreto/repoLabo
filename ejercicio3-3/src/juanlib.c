/*
 * juanlib.c
 *
 *  Created on: 1 sep. 2022
 *      Author: juanc
 */

#include <stdio.h>
#include <stdlib.h>

int scanint(int minimo, int maximo){  //verifico un entero entre dos valores
	int numero;
	printf("Ingrese un numero entero entre %d-%d: ",minimo,maximo);
	scanf(" %d", &numero);
	while(numero<minimo || numero>maximo){
		printf("intentelo otra vez: ");
		scanf(" %d", &numero);
	}
	return numero;
}

float scanfloat(int minimo, int maximo){  //verifico un flotante entre dos valores
	int numero;
	printf("Ingrese un numero flotante entre %d-%d: ",minimo,maximo);
	scanf(" %d", &numero);
	while(numero<minimo || numero>maximo){
		printf("intentelo otra vez: ");
		scanf(" %d", &numero);
	}
	return numero;
}
