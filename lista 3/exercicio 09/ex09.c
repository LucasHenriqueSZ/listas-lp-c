/*
executa enquanto nenhuma tecla for pressionada
*/
#include <stdio.h>
#include <conio.h>

int main (void){
	while(!_kbhit())printf("TESTE");

	return 0;
	}
