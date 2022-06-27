//numero de ocorrencias

#include <stdio.h>

int ocorencias(char n,char v[], int cont){
	int i=0;
	while(v[i]){
	if(v[i]==n){
	 cont+=1;
		}
		i++;
		}

	return cont;
	}
int main (void){
	char v[]="banana";
	printf("ocorencias %d\n",ocorencias('a',v,0)); //3
	return 0;
	}
