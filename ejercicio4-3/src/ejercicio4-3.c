/*
 ============================================================================
 Name        : ejercicio4-3.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Realizar un programa que permita la carga de temperaturas en Celsius y
Fahrenheit, validando las temperaturas ingresadas estén entre el punto de congelación y de
ebullición del agua para cada tipo de escala. Las validaciones se hacen en una biblioteca. Las
funciones de conversión de Fahrenheit a Celsius y de Celsius a Fahrenheit se hacen en otra.
 */

#include <stdio.h>
#include <stdlib.h>
#include "valid.h"

char continuar;
int temp_ingresada;

int main(void) {
	setbuf(stdout, NULL);
	do{



		printf("\nDesea continuar ingresando temperaturas? [s/n]");
		scanf("%c", &continuar);
		fflush(stdin);
		cont_check(&continuar);
	}while(continuar != 'n');
	printf("Adios!");
	return EXIT_SUCCESS;
}
