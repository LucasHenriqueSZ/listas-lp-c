/* calculadora simples */

#include <stdio.h>
#include <conio.h>

int main(void){
	
	float x,y;
	char o;

	printf("Expressao? ");
	scanf("%f %c %f",&x,&o,&y);

	switch(o){
		case '+': printf("valor = %.2f\n",x+y); break;
		case '-':printf("valor = %.2f\n",x-y); break;
		case '*':printf("valor = %.2f\n",x*y); break;
		case '/': 
			if(y==0){_textcolor(12); printf("nao e possivel dividir por zero!! \n");}
			else {printf("valor = %.2f\n",x/y);} break;


		default: printf("operador invalido: %c\n",o);
		}

	return 0;
	}
