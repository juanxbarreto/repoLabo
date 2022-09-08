/*
 ============================================================================
 Name        : Ejercicio2-4.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numero;
int menor_num;
int mayor_par;
int prod_neg;
int mayor_num;
int pos_mayor;


int main(void) {
	setbuf(stdout, NULL);
	for(int i=0; i<8;i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		if (i == 0 || numero<menor_num){ //busco el menor numero
			menor_num=numero;
		}

		if (numero % 2 == 0){ //busco el mayor par
			if(i == 0 || numero>mayor_par){
				mayor_par=numero;
			}
		}

		if(numero<1){ // multiplico los negativos
			prod_neg*=numero;
		}

		if (i == 0 || numero>mayor_num){ //busco el mayor numero
			mayor_num=numero;
			pos_mayor=i+1;
		}
	}

	printf("El menor numero ingresado fue: %d \n", menor_num);
	printf("El mayor numero par fue: %d \n", mayor_par);
	printf("El producto de los negativos fue: %d \n", prod_neg);
	printf("El mayor numero fue: %d y fue ingresado en la posicion: %d \n", mayor_num, pos_mayor);

	return EXIT_SUCCESS;
}
