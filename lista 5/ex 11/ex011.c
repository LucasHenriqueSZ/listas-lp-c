
// produto utilizando apenas soma e subtração

#include <stdio.h>

int produto (int a, int b,int prod){
	
	if(b>0)return produto(a,b-1,prod+=a);
	else return prod;
	
	}
int main (void){
	int a,b;
	printf("mostra o produto de :  A*B=produto \n\n");
	printf("informe o valor de A: ");
		scanf("%d",&a);
		printf("informe o valor de B: ");
		scanf("%d",&b);

	printf("o resultade do produto de %d*%d e igual a: %d \n",a,b,produto(a,b,0));
	

	return 0;
	}
