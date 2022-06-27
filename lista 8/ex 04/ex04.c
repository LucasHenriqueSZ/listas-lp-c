//inversão de string

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

char rev (char v[], char t[]){
	int aux,cont;
	cont=len(v);
	aux=cont-1;
	for(int i=0;i<=cont;i++){
		t[i]=v[aux];
		aux-=1;
		}
	}

int main (void){
	char v[10]="ROMA";
	char t[10];
	rev(v,t);
	puts(t); //AMOR
	return 0;
	}
