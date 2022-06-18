/* situação do aluno 3*/
#include <stdio.h>
#include <conio.h>

int main (void){
	float p1,p2,m;
	int faltas;

		printf ("informe as notas do aluno: \n");
		scanf ("%f %f",&p1,&p2);
	m=(p1+p2)/2;
	printf("faltas: \n");
	scanf("%d",&faltas);

	if(faltas > 5 && m <=4) {_textcolor(12); printf("REPROVADO! \n");}
	else if (faltas <=5 && m >=6) {_textcolor(10); printf("APROVADO! \n");}
	else {_textcolor(6); printf("RECUPERACAO! \n");}
	return 0;
	}
