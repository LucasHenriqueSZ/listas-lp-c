//distancia entre pontos no plano cartesiano

#include <stdio.h>
#include <math.h>
typedef struct{
	float p1;
	float p2;
}Ponto;
Ponto Le_ponto(Ponto p){
	printf("informe o ponto X:");
	scanf("%f",&p.p1);
	printf("informe o ponto Y: ");
	scanf("%f",&p.p2);
	return p;
	}

float Distancia(Ponto a, Ponto b){
	float d;
	  //dAB² = (xB – xA)² + (yB – yA)²
	d=sqrt(pow(b.p1-a.p1,2)+pow(b.p2-a.p2,2));
	return d;
	}
int main (void){
	Ponto a = Le_ponto(a);
	Ponto b = Le_ponto(b);
	printf("Distancia: %.1f\n",Distancia(a,b));
return 0;
}
