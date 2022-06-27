//exibição centralizada de string 

#include <stdio.h>
#include <string.h>
#include <conio.h>

char centraliza (char v[],int y){
	for(int i=1;i<=y;i++){
		puts(" ");
		}	
	for(int i=1;i<=33;i++){
		printf(" ");
		}	
puts(v);
	for(int i=14;i<=25;i++){
		puts(" ");
		}	
	
	}

int main (void){
	char v[]="apenas um teste";
	centraliza(v,13);
	return 0;
	}
