
/* rodizio de veiculos */
#include <stdio.h>

int main (void){
	int p;

		printf("informe o final da placa: \n");
		scanf("%d",&p);
	
	if(p==1){
		printf("Segunda-feira \n");
		}else if(p==2){
		printf("Segunda-feira e terca-feira \n");
		}else if(p==3){
		printf("terca-feira \n");
		}else if(p==4 || p==5){
		printf("quarta-feira \n");
		}else if(p==6 || p==7){
		printf("quinta-feira \n");
		}else if(p==9 || p==0){
		printf("sexta-feira \n");
		}else{
		printf("final da placa invalida \n");
		}

	return 0;
	}
