/* Temperatura */
#include <stdio.h>

int main (void){
	
	float f,c;

	printf("informe a temperatura em fahrenheit \n");
	scanf("%f",&f);

	c=(f-32)*5/9;

	printf("a temperatura em celsius e: %.3f \n",c);

	return 0;
	}
