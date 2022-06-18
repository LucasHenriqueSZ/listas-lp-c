/*Calcula consumo medio de um carro*/
#include <stdio.h>

int main (void){
	float csm,km,lt;
	printf("distancia percorrida em quilometros: \n");
	scanf ("%f",&km);
	printf("quantidade de combustivel gasto por litros: \n");
	scanf("%f",&lt);
	csm=km/lt;
	printf("o consumo medio do carro foi de:  %.1f L \n",csm);
	return 0;
	}
