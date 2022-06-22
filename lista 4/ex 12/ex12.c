//numeros aleaatorios

#include <stdio.h>
#include <conio.h>
#include <time.h>

int npa(void){
	static unsigned s=0;
	if(s==0){s=time(NULL)%1000;}
	auto unsigned n=s;
	return n;
	}

int main (void){
while(!_kbhit()){
		printf("%d\n",npa());
		_sleep(1);
		}
	return 0;
	}
