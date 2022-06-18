/* Informa perímetro da circunferência */

#include <stdio.h>

int main (void){

	float raio,perim;

	printf("qual o raio? \n");
	scanf("%f",&raio);
	 perim=2*(3.14*raio);
	printf("perimetro = %.2f\n",perim);
	
	return 0;
	}
