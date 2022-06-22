// devolve a letra minuscula da letra informada

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char minuscula(char c){
	if(c==toupper(c)){return tolower(c);}else{return c;}
	}

int main (void){
	char c,a;
	printf("informe uma letra  ");
	scanf("%c",&c);
	a=minuscula(c);
	printf("%c\n",a);
	return 0;
	}
