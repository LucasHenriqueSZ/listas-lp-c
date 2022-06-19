//quadrados perfeitos
#include <stdio.h>


float quadrado(int n,int i,int cont){
	if(cont<=n){return i+quadrado(n,i+2,cont+1);}else{return 0;}
	}
int main (void){
	int n;
	int fat;
	printf("calcula o quadrado do numero informado \n");
	do{
	printf("informe um numero ");
		scanf("%d",&n);
	}while(n<0);
		
	int qd=quadrado(n,1,1);
	printf("o quadrado de %d e %d \n",n,qd);

	return 0;
	}
