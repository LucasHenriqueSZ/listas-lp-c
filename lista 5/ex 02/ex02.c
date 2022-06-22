// calculo de potencia

#include <stdio.h>

float pot(float x, int n){
	if(n==1) return x;
	return x*pot(x,n-1);
	}

int main (void){
	float x;
	int n;

	printf("Base e expoente? ");
	scanf("%f %d",&x,&n);
	printf("pot = %.1f\n",pot(x,n));
	return 0;
	}
