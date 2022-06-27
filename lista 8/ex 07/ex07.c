//valor inteiro de uma string

#include <stdio.h>
#include <ctype.h>

int val(char v[]){
	int mult=1,num;
	for(int i=2;i>-1;i--){
		v[i]=v[i]-48;
		}

	for(int i=2;i>-1;i--){
	num+=v[i]*mult;
		mult*=10;
		}
	return num;
}


int main (void){
	char v[10]="351";
	int n=val(v);
	printf("valor: %d\n",2*n);
	return 0;
	}
