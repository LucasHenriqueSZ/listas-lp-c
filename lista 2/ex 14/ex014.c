/* rodizio de veiculos com switch-case */

#include <stdio.h>

int main (void){
	
	int placa;

	printf("informe o final da placa: \n");
	scanf("%d",&placa);

  switch(placa){
		case 1: printf("Segunda-feira \n"); break;
		case 2: printf("segunda feira e terca feira \n"); break;
		case 3: printf("terca-feira \n"); break;
		case 4: printf("quarta-feira \n"); break;
		case 5: printf("quarta-feira \n"); break;
		case 6: printf("quinta-feira \n"); break;
		case 7: printf("quinta-feira \n"); break;
		case 9: printf("sextaa-feira \n"); break;
		case 0: printf("sexta-feira \n"); break;
		default:printf("numero da placa invalido!");
		
		}
	return 0;
	}
