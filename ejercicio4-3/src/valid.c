/*
 * valid.c
 *
 *  Created on: 5 sep. 2022
 *      Author: juanc
 */

#include <stdio.h>
#include <stdlib.h>

void cont_check(char *rta){
	char rta_nueva;
	while((&rta)!='s' && (&rta)!='n'){
		printf("\nIngrese una opcion correcta [s/n]");
		scanf("%c", &rta_nueva);
		fflush(stdin);
		*rta=rta_nueva;
	}
}


