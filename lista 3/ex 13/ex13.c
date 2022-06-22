/* caixa eletronico */
#include <stdio.h>
#include <conio.h>
int main (void){
	int r;
	float saldo=1000.00,aux;

	while(r!=4){
		printf(" 1-deposito \n 2-saque \n 3-saldo \n 4-sair \n");
			scanf("%d",&r);
	switch(r){
		case 1 : printf("informe o valor do deposito: \n R$");
				scanf("%f",&aux);
				saldo+=aux;
		; break;
			
		case 2: printf(" informe o valor do saque: \n R$");
				scanf("%f",&aux);
				if(saldo>=aux){
				saldo-=aux;
					}else{
				_textcolor(4);printf("saldo insuficiente! \n");_textcolor(7);
					} ;break;

		case  3: printf("saldo: \n R$%.2f \n",saldo); ;break;
		case 4: r=4; break;
		
		default: printf("opcao invalida \n");
		}
	}

	return 0;
	}
