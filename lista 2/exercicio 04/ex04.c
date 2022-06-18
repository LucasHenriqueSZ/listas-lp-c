/* Situação do aluno */
#include <stdio.h>

int main(void){
	float p1,p2,m;
	printf("informe as notas");
	scanf("%f %f", &p1, &p2);
	m=(p1+p2)/2;
	if(m>=6) puts("APROVADO!");
	else  puts("REPROVADO!");
	return 0;
	}
