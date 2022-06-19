/*contagem regressiva*/
#include <stdio.h>

int main (void){
	int n;

		do{
		printf("informe um numero\n");
		scanf("%d",&n);
		}while(n<=0);
	
	for(int i=n;i>=0;i--){
		printf( "-%d",i);
}
	printf("\n");
	return 0;
	}
