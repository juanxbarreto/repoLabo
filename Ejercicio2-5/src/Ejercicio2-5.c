/*
 ============================================================================
 Name        : Ejercicio2-5.c
 Author      : Juan Cruz Barreto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//ACLARACION!: tomamos en cuenta que todos necesitan libreta y no consultamos

char continuar;
int n_legajo;
char estado_civil;
int edad;
char genero;
int ingreso;
int cant_mayores=0;
int antigua_ingreso=0;
int antigua_edad;
int antigua_legajo;
int precio_libreta=450;
int contador=0;
int totalprecio_libretas;
float descuento;
int precio_final;



int main(void) {
	setbuf(stdout, NULL);
	do{
		do{
			printf("Ingrese el numero de legajo: ");
			scanf(" %d", &n_legajo);
		}while(n_legajo / 1000 < 1);

		do{
			printf("Ingrese el estado civil: [s para soltero, c para casado o v viudo]");
			scanf(" %c", &estado_civil);
		}while(estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v');

		do{
			printf("Ingrese la edad: [mayor de 18]");
			scanf(" %d", &edad);
		}while(edad < 18);

		do{
			printf("Ingrese el año de ingreso: [no mayor a 2022]");
			scanf(" %d", &ingreso);
		}while(ingreso > 2022 || ingreso < 1900);


		do{
			printf("Ingrese el genero: [f para femenino, m para masculino, o para no binario]");
			scanf(" %c", &genero);
		}while(genero != 'f' && genero != 'm' && genero != 'o');

		if(edad > 60){
			cant_mayores++;
		}

		if(genero == 'f'){
			if(antigua_ingreso == 0 || ingreso < antigua_ingreso){
				antigua_legajo=n_legajo;
				antigua_edad=edad;
				antigua_ingreso=ingreso;

			}
		}

		contador++;
		printf("Desea ingresar mas alumnos?");
		scanf(" %c", &continuar);
	}while(continuar=='s');

	if(contador==5){
		descuento=(float)totalprecio_libretas*0.05;
	} else{
		if(contador>10){
			descuento=(float)totalprecio_libretas*0.1;
		}
	}

	if(cant_mayores>0){
		descuento+=(float)totalprecio_libretas*0.25;
	}

	totalprecio_libretas=precio_libreta*contador;
	precio_final=totalprecio_libretas-descuento;

	printf("La cantidad de mayores de 60 años es de %d personas \n", cant_mayores);
	printf("El legajo de la mujer mas antigua es: %d y tiene la edad de: %d \n", antigua_legajo, antigua_edad);
	printf("La facultad debe abonar en concepto de libretas (sin descuentos aplicados) un total de: $%d \n", totalprecio_libretas);
	printf("El precio final en concepto de libretas es de: $%d \n", precio_final);
	return EXIT_SUCCESS;
}
