/* equanção do 2º grau */
#include <stdio.h>
#include <math.h>

int main(void){
	

	float a,b,c,x1,x2,delta;

	printf("informe os coeficientes A, B, C : \n");
		do{
		printf("A: ");
		scanf("%f",&a);
		}while(a==0);
		printf("B: ");
		scanf("%f",&b);
		printf("C: ");
		scanf("%f",&c);

	delta=pow(b,2)-4*a*c;

	if(delta<0){
		printf("delta negativo \n");
		printf("%.2f \n",delta);
		}
	else{
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;

	printf(" x1: %.2f \n x2: %.2f \n",x1,x2);
	}

	return 0;
	}
