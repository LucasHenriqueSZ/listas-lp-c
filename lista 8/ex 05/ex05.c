//concatenação de string

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

int cat (char v[], char w[]){
	int contv=len(v),contw=len(w),x=0;
	for(int i=contv;i<contw+contv;i++){
		v[i]=w[x];
	x+=1;}
	}

int main (void){
	char v[10]="aba";
	char w[10]="cate";
	cat(v,w);
	puts(v);
	return 0;
	}
