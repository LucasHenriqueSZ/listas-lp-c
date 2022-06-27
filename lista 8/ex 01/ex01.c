//comparação de strings (sensivel ao caso)

#include <stdio.h>
#include <string.h>


int main (void){
	char s[513];
	int resp;
	printf("Senha? ");
	gets(s);
	resp= strcmp(s,"abracadabra");
	if(resp!=0) puts("senha incorreta!!");
	else puts("senha correta!!");

	return 0;
	}
