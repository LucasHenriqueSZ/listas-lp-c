/* pingue-pongue */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void){
	
	int x=1,y=1,dx=-1,dy=-1,color;

	do{
		_gotoxy(x,y);
		printf("o\b");
		_sleep(1);
		_textcolor(color);printf(".");
		    
		
		if(x==1 || x==80)dx=-dx;
		if(y==1 || y==24)dy=-dy;
		x+=dx;
		y+=dy;
		color = rand() % 15 + 1;

		}while(!_kbhit());


	return 0;}
