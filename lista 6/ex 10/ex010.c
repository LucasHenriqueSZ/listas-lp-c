//jogo da velha: programa principal

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
 

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
	printf(" JOGO DA VELHA \n JOGADOR 1: x \n computador: o \n\n");
	for(int i=0;i<3;i++){
		printf(" %c | %c | %c \n",m[i][0],m[i][1],m[i][2]);
		if(i<2) puts("---+---+---");
		}
	
	}

int computador(char m[3][3]){
	int x,y;
	while(vencedor(m)==32){
	do{
		x = rand() % 3;
		y = rand() % 3;
			printf("%d",x);
		}while(x<0 || x>2 || y<0 || y>=3 || m[x][y]=='x' || m[x][y]=='o');
		m[x][y]='o';
		exibe(m);
		usuario(m);
	}
}

int usuario(char m[3][3]){
		int x,y;
	
		while(vencedor(m)==32){
		
		do{printf("jogador 1 posicao? ");
		scanf("%d %d",&x,&y);
		}while(x<0 || x>2 || y<0 || y>=3 || m[x][y]=='x' || m[x][y]=='o');
		m[x][y]='x';
		exibe(m);
		computador(m);
	}
}



int main (void){	
	char m[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int j=0,e,s;
	char v;
	printf("par (0) ou impar (1)? ");
	scanf("%d",&e);
	srand(time(NULL));
	s = rand() % 2;
	printf("sorteado: %d\n",s);
	if(e==s)puts("voce comeca!!");
	else puts("eu comeco!!");
	printf("pressione enteer...");
	_getch();

	do{
		exibe(m);
		if(e==s)usuario(m);
		else computador(m);
		v=vencedor(m);
		s= !s;
		}while(++j<9 && v==' ');
	exibe(m);
	switch(v){
		case ' ':puts("\nEmpate!\n");break;
		case 'x':puts("\nVoce venceu!\n");break;
		case 'o':puts("\nEu venci!\n");break;
		}
	return 0;
}
