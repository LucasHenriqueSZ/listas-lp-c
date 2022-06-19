
/* quadrados perfeitos */
#include <stdio.h>


int main (void){
	
	int n,aux,qd;
	aux=1;
	printf("informe um numero");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		qd+=aux;
		aux+=2;
		}

	printf("o quadrado de %d e igual a: %d\n",n,qd);

	return 0;
	}
