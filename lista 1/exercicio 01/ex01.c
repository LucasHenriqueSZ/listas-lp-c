/*Calcula o IMC e determina se uma pesssoa está obesa*/

#include <stdio.h>
#include <math.h>


int main(void){
	float peso, altura, imc;
	printf("Qual e o peso e a altura? ");
		scanf("%f %f",&peso,&altura);
	imc=peso/pow(altura,2);
	printf("IMC = %.if\n",imc);
		if(imc<=30) printf("nao esta obeso!\n");
	else printf("esta obesa!\n");

	return 0;
	}
