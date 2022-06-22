/* maximo e minimo de uma sequencia*/
#include <stdio.h>

int main (void){
	int sequencia[]={0},qnt,max,min;
	printf("informe o tamanho da lista da llista:   ");
	scanf("%d",&qnt);
	for(int i=0;i<qnt;i++){
		printf("adiciona a lista: ");
		scanf("%d",&sequencia[i]);
		}
	for(int i=0;i<qnt;i++){
		if(sequencia[i]>max){
			max=sequencia[i];
			}
		}
		min=max;
	for(int i=0;i<qnt;i++){
		if(sequencia[i]<min){
		min=sequencia[i];
			}
		}
	printf("\n\n LISTA");
	for(int i=0;i<qnt;i++){
		printf(", %d",sequencia[i]);
		}
	printf("\n\n maximo %d\n minimo: %d\n",max,min);
	return 0;
	}
