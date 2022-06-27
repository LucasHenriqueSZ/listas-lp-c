// jogo da velha: vencedor 

#include <stdio.h>
#include <conio.h>


int iguais(int a,int b,int c){
	if(a!=' ' && a==b && b==c) {
		return 1;}
	else{
		return 0;}

	}

int vencedor (char m[3][3]){
	for(int i=0;i<3;i++){
		if(iguais(m[i][0],m[i][1],m[i][2])) return m[i][0];
		if(iguais(m[0][i],m[1][i],m[2][i])) return m[0][i];		
		}
	if(iguais(m[0][0],m[1][1],m[2][2])) return m[0][0];
	if(iguais(m[0][2],m[1][1],m[2][0])) return m[0][2];

	return ' ';
	}


void exibe (char m[3][3]){
	_clrscr();
	for(int i=0;i<3;i++){
		printf(" %c | %c | %c \n",m[i][0],m[i][1],m[i][2]);
		if(i<2) puts("---+---+---");
		}
	
	}


int main (void){
	char m[3][3]={{'x',' ','o'},{' ','x','o'},{' ',' ','o'}};
	exibe(m);
	printf("\nVencedor: %c\n\n",vencedor(m));
	return 0;
	}
