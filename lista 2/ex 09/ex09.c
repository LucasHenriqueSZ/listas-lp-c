/*imposto de renda*/

#include <stdio.h>

int main (void){
	float s,ir;

	printf ("informe o salario: \n");
	scanf("%f",&s);

	if(s<=1903.98){
		ir=0;
		}else if(s<=2826.65){
		ir=s*0.075;
		}else if(s<=3751.05){
		ir=s*0.15;
		}else if (s<=4664.68){
		ir=s*0.225;
		}else{
		ir=s*0.275;
		}

	printf("o valor a ser pago do imposto de renda e: \n %.2f \n",ir);
	
	return 0;
	}
