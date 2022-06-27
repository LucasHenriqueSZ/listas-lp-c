//binario

#include <stdio.h>


void binario(int n){
	if(n/2!=0) binario(n/2);
	printf("%d",n%2);
	}

int main (void){
	int n;
	printf("nummero? ");
	scanf("%d",&n);
	binario(n);
	 printf ("\n");
	return 0;
	}
