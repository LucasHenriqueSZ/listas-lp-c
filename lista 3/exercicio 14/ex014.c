// teste de primalidade

#include <stdio.h>
#include <math.h>

int main (void){
	int n,d,raiz,aux;
	printf("numero? ");
	scanf("%d",&n);
	raiz=ceil(sqrt(n));


	for(d=2;d<=raiz;d++){
		aux=n%d;
		if(aux==0) break;
	}

	if (aux==0) puts("nao e primo!");
	else puts("E primo!");
	return 0;

	}
	
