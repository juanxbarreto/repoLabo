/*
 ============================================================================
 Name        : EJERCICIO 3-5.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//EJERCICIO 3-5 COMPLETO

#include <stdio.h>
#include <stdlib.h>

int resultado;
int restar1(int, int);
int restar2(void);
void restar3 (int, int);
void restar4(void);
int respuesta;
int eleccion;
int num1;
int num2;

int main(void) {
	setbuf(stdout, NULL);

	do{
		printf("eliga una opcion de resta: [1/2/3/4]");
		scanf("%d", &eleccion);
	}while(eleccion < 1 || eleccion > 4);

	if(eleccion == 1 || eleccion == 3){
		printf("Ingrese un numero: ");
		scanf("%d", &num1);

		printf("Ingrese el numero a restar: ");
		scanf(" %d", &num2);
	}
	switch(eleccion){
		case 1:
			respuesta=restar1(num1, num2);
			printf("El resultado es: %d", respuesta);
		break;
		case 2:
			respuesta=restar2();
			printf("El resultado es: %d", respuesta);
		break;
		case 3:
			restar3(num1, num2);
		break;
		case 4:
			restar4();
		break;

	}



	return EXIT_SUCCESS;
}

int restar1 (int num1, int num2){
	resultado=num1-num2;
	return resultado;
}

int restar2(void){
	printf("Ingrese un numero: ");
	scanf("%d", &num1);

	printf("Ingrese el numero a restar: ");
	scanf(" %d", &num2);
	resultado=num1-num2;
	return resultado;
}

void restar3(int num1, int num2){
	resultado=num1-num2;
	printf("El resultado es: %d", resultado);
}

void restar4(void){
	printf("Ingrese un numero: ");
	scanf("%d", &num1);

	printf("Ingrese el numero a restar: ");
	scanf(" %d", &num2);
	resultado=num1-num2;
	printf("El resultado es: %d", resultado);
}
