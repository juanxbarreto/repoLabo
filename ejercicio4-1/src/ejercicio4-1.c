/*
 ============================================================================
 Name        : ejercicio4-1.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
un número. Utilizar la función de PedirNumero de la ejercitación 3. Por ejemplo:
5! = 5*4*3*2*1 = 120
 */

#include <stdio.h>
#include <stdlib.h>

int numero1;
void pedirNumero(int *num1, int minimo, int maximo);

int main(void) {
	setbuf(stdout, NULL);
	pedirNumero(&numero1, 1, 999);
	int factorial=1;
	for(int i=1;i<=numero1;i++){
		factorial=factorial*i;
	}
	printf("El factorial de %d es: %d", numero1, factorial);
	return EXIT_SUCCESS;
}

void pedirNumero(int *num1, int minimo, int maximo){
	int numero_ingresado;
	printf("Ingrese un numero entre %d-%d: ", minimo, maximo);
	scanf("%d", &numero_ingresado);
	while(numero_ingresado<minimo || numero_ingresado>maximo){
		printf("intentelo nuevamente: ");
		scanf("%d", &numero_ingresado);
	}
	*num1=numero_ingresado;
}
