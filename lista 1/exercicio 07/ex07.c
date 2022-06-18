/*Média */
#include <stdio.h>

int main (void){
	
	float p1,p2,m;

	printf("informe as notas p1 e p2:   \n");
	scanf("%f\n%f",&p1,&p2);

	m=(p1+p2)/2;

	printf("a media foi:  %.2f\n",m);
	
	return 0;
	}
