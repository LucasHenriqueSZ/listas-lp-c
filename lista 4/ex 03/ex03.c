// teste de maiúsculo

#include <stdio.h>
#define maiuscula(c)  c>='A' && c<='Z'

int main (void){
	char x;
	printf("caractere? ");
	scanf("%c",&x);
	printf("maiuscula: %s\n",maiuscula(x)?"sim":"nao");
	return 0;
	}
