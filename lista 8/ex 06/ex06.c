//conversão para maiúscula

#include <stdio.h>
#include <ctype.h>

int upr(char v[]){
	int i=0;
	while(v[i]){
		v[i]=toupper(v[i]);
		i++;
		}
	}


int main (void){
	char v[10]="teste";
	upr(v);
	puts(v);
	return 0;
	}
