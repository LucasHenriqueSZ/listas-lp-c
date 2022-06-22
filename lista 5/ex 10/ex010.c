//quociente utilizando apenas soma e subtração
#include <stdio.h>

int div (int a, int b,int qct){
	if(a>0)return div(a-b,b,qct+1);
	else return qct;
	}
int main (void){
	int a,b;
	printf("mostra o quociente de :  a/b=quociente \n\n");
	printf("informe o valor de A: ");
		scanf("%d",&a);
	do{
		printf("informe o valor de B: ");
		scanf("%d",&b);}while(b<=0);

	printf("o resultade do quociente de %d/%d e igual a: %d \n",a,b,div(a,b,0));
	

	return 0;
	}
