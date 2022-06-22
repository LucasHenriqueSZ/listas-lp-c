// par utilizando apenas subtrações

#include <stdio.h>

int par (int n){
	if(n>=1) return par(n-2);
	return n;
	}
int main (void){
	int n;
	printf("num? ");
	scanf("%d",&n);
	if(par(n)==0)printf("Par! \n");
	else
	printf("Impar! \n");
	return 0;
	}
