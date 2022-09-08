/*
 ============================================================================
 Name        : ejercicio3-5.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//fflush(stdin);

#include <stdio.h>
#include <stdlib.h>
#include "lib3-5.h"

int num1;
int num2;
int rta;
char opcion='d';

int main(void) {
	setbuf(stdout, NULL);
	switch(opcion){
		case 'a':
			pedirint(&num1, &num2);
			rta=restar1(num1, num2);
			printf("%d - %d = %d", num1, num2, rta);
			break;
		case 'b':
			rta=restar2();
			printf(" = %d", rta);
			break;
		case 'c':
			pedirint(&num1, &num2);
			restar3(num1, num2);
			break;
		case 'd':
			restar4();
			break;
	}
	return EXIT_SUCCESS;
}


