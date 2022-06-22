//dia da semana

#include <stdio.h>
void dds (int n){

	switch(n){
		case 2: printf("Segunda-Feira \n"); break;
		case 3: printf("Terça-Feira \n"); break;
		case 4: printf("Quarta-Feira \n"); break;
		case 5: printf("Quinta-Feira \n"); break;
		case 6: printf("Sexta-Feira \n"); break;
		case 7: printf("Sabado \n"); break;
		case 1: printf("Domingo \n"); break;
		default: printf("numero  invalido \n");
		}
	
	}

int main (void){

	int n;
	printf("informe o numero do dia da semana de 1 a 7 \n ");
	scanf("%d",&n);
	dds(n);

	return 0;
	}
