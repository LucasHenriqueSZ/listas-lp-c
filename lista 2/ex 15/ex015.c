/* indice de massa corporal (IMC) */

#include <stdio.h>

int main(void){
	float imc,peso,a;

	printf("altura: \n");
	scanf("%f",&a);
	printf("peso: \n");
	scanf("%f",&peso);

	imc=peso/(a*a);

	printf("IMC: %.2f \n",imc);

	if(imc<18.5){printf("magra! \n");}
	else if (imc>30) {printf("obesa! \n");}
	else{printf("normal! \n");}
	
	return 0;
	}
