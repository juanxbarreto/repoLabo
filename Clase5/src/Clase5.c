/*
 ============================================================================
 Name        : Clase5.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 fflush(stdin);
 */

#include <stdio.h>
#include <stdlib.h>

int legajos[10];
int edades[10];
int sueldos[10];
int edad;
int sueldo;

int main(void) {
	setbuf(stdout, NULL);
	for(int i=0; i<10;i++){
		printf("\n Ingrese la edad del empleado nro %d: ", i+1);
		scanf("%d", &edad);
		edades[i]=edad;
		printf("\n Ingrese el sueldo del empleado nro %d: ", i+1);
		scanf("%d", &sueldo);
		sueldos[i]=sueldo;
		legajos[i]=i+1;
		printf("\n El empleado nro %d tiene un sueldo de %d con una edad de %d años",legajos[i], sueldos[i], edades[i]);
	}
	return EXIT_SUCCESS;
}
