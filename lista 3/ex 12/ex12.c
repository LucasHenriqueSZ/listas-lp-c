/*consistencia de entrada e raiz quadrada */
#include <stdio.h>
#include <math.h>

int main (void){
	int n;
	float raiz;

	do{
	printf("informe um numero: ");
	scanf("%d",&n);
		}while(n<=0);

	raiz=sqrt(n);
	printf("raiz quadrade de %d = %.3f \n",n,raiz);
	return 0;
	}
