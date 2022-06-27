// saida do labirinto, função sai encontra a saida do labirinto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15

int exibe(int m[MAX][MAX]){
	for (int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			printf("%s",m[i][j]?"\xDB":" ");
			}
		puts(" " );
		}
	}
int gera(int m[MAX][MAX]){


int al,al2;
	for(int x=1;x<=55;x++){
	al=rand() % 14;
	al2=rand() % 14;
		m[al][al2]=1;
		}

m[1][0]=0;
m[1][1]=0;
m[14][14]=0;

}

void mostra (char b, int i, int j){
	_textcolor(2); _gotoxy(2*j+1,i+1); printf("%c\b",b);_sleep(0);
	}

int sai (int m[MAX][MAX],int i, int j){
	m[i][j]=2;
	mostra('xDB',i,j);
	if(i==MAX-2 && j==MAX-1)return 1;
	if(m[i+1][j]==0 && sai(m,i+1,j))return 1;
	if(m[i][j+1]==0 && sai(m,i,j+1))return 1;
	if(m[i-1][j]==0 && sai(m,i-1,j))return 1;
	if(j>0 && m[i][j-1]==0 && sai(m,i,j-1))return 1;
	mostra(' ',i,j);
	return 0;
	}


int main(void){
	int m[MAX][MAX]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
					 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
					 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
				     {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					 {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
	srand(time(NULL));
	gera(m);
	exibe(m);
	sai(m,1,0);
	return 0;
	}
