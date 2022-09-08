/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Realizar una función Suma que reciba como parámetros dos enteros (los que
va a sumar) y un puntero a entero que guardara el resultado de esta. La función retorna 0 si
pudo realizar la suma y -1 en caso de no haberla podido realizar.
 */

#include <stdio.h>
#include <stdlib.h>
#define numero1 1
#define numero2 -10

int suma(int num1,int num2, int *resultado);

int main(void) {
	setbuf(stdout, NULL);
	int resultado;
	suma(numero1, numero2, &resultado);
	printf("%d + %d = %d", numero1, numero2, resultado);
	return EXIT_SUCCESS;
}

int suma(int num1,int num2, int *resultado){
	*resultado=num1+num2;
	if(&resultado<0){
		return -1;
	}else{
		return 0;
	}
}
