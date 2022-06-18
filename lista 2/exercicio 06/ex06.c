/* situação do aluno 2 */
#include <stdio.h>
#include <conio.h>

int main(void){
	int faltas;
	float p1,p2,m;

	puts("Informe a situacao do aluno: \n");
		printf("Nota 1 e nota 2: \n");
		scanf("%f %f",&p1, &p2);
	m=(p1+p2)/2;
	printf("faltas: \n");
	scanf("%d",&faltas);
	if(faltas <=5 && m>=6) {_textcolor(10); printf(" APROVADO! \n com media: %.1f e com %d faltas \n",m,faltas);}
	else {_textcolor(12); printf(" REPROVADO! \n com media: %.1f e com %d faltas \n",m,faltas);}
	return 0;
	}
