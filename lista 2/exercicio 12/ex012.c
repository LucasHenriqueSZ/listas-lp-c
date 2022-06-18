/*
ex_12-numerologia de facebook

Suponha que o perfil de uma pessoa possa ser determinado pela sua data de nascimento
dada uma data de nascimento informe o perfil correspondente:
*/
#include <stdio.h>
#include <math.h>

int main(void){
	
	int dia,mes,ano,data, c1,c2;

	printf("informe a data: \n dia/mes/ano \n");		
	scanf("%d %d %d",&dia,&mes,&ano);

	data=((dia*pow(10,2)+mes)+ano);
	c1=data/100;
	c2=data-(c1*100);
	data=c1+c2;
	data=data%5;

	switch(data){
		case 0: printf("Timido \n"); break;
		case 1: printf("Sonhador \n"); break;
		case 2: printf("Paquerador \n"); break;
		case 3: printf("Atraente \n"); break;
		case 4: printf("irresistivel \n"); break;
		default :printf("invalido \n");
		}
	return 0;
		}
