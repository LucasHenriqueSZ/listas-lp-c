/*
			desenha rastor
			R:atuva/desativa rastro
			c:muda cor do rastro
*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main (void){
	int col=40,lin=12, color=1,r=219;
	while(1){
		_gotoxy(col,lin);
		_textcolor(color); _putch(r);
		switch(toupper(_getch())){
			case 'W':if(lin>1) lin--;break;
			case 'S':if(lin<24) lin++;break;
			case 'D':if(col<80) col++;break;
			case 'A':if(col>1) col--;break;
			case 'C':if(color<15){color++;}else{color=1;};break;
			case 'R':if(r==219)r=0; else r=219;;break;
			case 'F': exit(1);
			}
		_textcolor(15);_gotoxy(1,25);printf("cor: %d\n",color);
		 printf(r==219?"ativado    ":"desativado");
		}

	return 0;
	}
