//comprimento de string

#include <stdio.h>
#include <string.h>

int len(char v[]){
	int i=0,cont=0;
	while(v[i]){
		i++;
		cont++;
		}
	return cont;
	}

int main (void){
	char v[10]="teste";
printf("comprimmento: %d\n",len(v));//5
	return 0;
	}
