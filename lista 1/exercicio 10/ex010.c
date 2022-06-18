/*Distancia entre dois pontos*/
#include <stdio.h>
#include <math.h>

int main(void){
	
	float xa,xb,ya,yb,d;

	printf("informe as coordenadas do ponto A (xb,ya):  \n");
	scanf("%f %f",&xa,&ya);

	printf("informe as coordenadas do ponto B (xb,yb):  \n");
	scanf("%f %f",&xb,&yb);

	d=sqrt(pow(xb-xa,2)+pow(yb-ya,2));

	printf("a distancia entre os pontos eh: %.2f \n",d);


	return 0;
	}
