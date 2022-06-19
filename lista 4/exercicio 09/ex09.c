// fatorial

#include <stdio.h>
float fatorial(int n){
	if(n>0) return  n*fatorial(n-1);
	else
		return 1;
	}
int main (void){
	int n;
	int fat;
	printf("calcula o fatorial do numero informado \n");
	do{
	printf("informe um numero ");
		scanf("%d",&n);
	}while(n<0);

	if(n==0){
		fat=1;
			}else{
		fat=fatorial(n);
		}

	printf("o fatrial de %d e %d \n",n,fat);

	return 0;
	}
