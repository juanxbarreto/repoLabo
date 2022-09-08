/*
 * lib3-5.c
 *
 *  Created on: 1 sep. 2022
 *      Author: juanc
 */

#include <stdio.h>
#include <stdlib.h>

void pedirint(int(*num1), int(*num2)){
	int ingreso1;
	int ingreso2;
	printf("Ingrese un 1er numero: ");
	scanf("%d", &ingreso1);
	printf("Ingrese un 2ndo numero: ");
	scanf("%d", &ingreso2);
	*num1=ingreso1;
	*num2=ingreso2;
}

int restar1(int num1, int num2){
	int resultado;
	resultado = num1 - num2;
	return resultado;
}

int restar2(void){
	int num1;
	int num2;
	int resultado;
	pedirint(&num1, &num2);
	resultado = num1 - num2;
	printf("%d - %d", num1, num2);
	return resultado;
}

void restar3(int num1, int num2){
	int resultado;
	resultado = num1 - num2;
	printf("%d - %d = %d", num1, num2, resultado);
}

void restar4(void){
	int num1;
	int num2;
	int resultado;
	pedirint(&num1, &num2);
	resultado = num1 - num2;
	printf("%d - %d = %d", num1, num2, resultado);
}

