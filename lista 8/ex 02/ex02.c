//comparação de strings 2 (sensivel ao caso)

#include <stdio.h>
#include <string.h>


int main (void){
	char s[513];
	int resp;
	printf("Senha? ");
	gets(s);
	resp= _stricmp(s,"abracadabra");
	if(resp!=0) puts("senha incorreta!!");
	else puts("senha correta!!");

	return 0;
	}
