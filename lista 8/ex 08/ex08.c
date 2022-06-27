//pertinencia de caractere em string

#include <stdio.h>

int pos(char num,char v[], int cont){
	int i=0;
	while(v[i]){
	if(v[i]==num && cont<=-1){
	 cont=i;}
		i++;
		}

	return cont;
	}
int main (void){
	char v[10]="35171";
	printf("posicao do 1: %d\n",pos('1',v,-1)); //2
	printf("posicao do 9: %d\n",pos('9',v,-1)); //-1
	return 0;
	}
