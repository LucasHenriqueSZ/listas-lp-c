/* maior entre dois numeros */
#include <stdio.h>

int main(void){
	int num1,num2;

	printf("informe dois numeros \n");
	scanf("%d %d",&num1,&num2);

   	if(num1 > num2)	printf("o numero %d e maior que %d \n",num1 ,num2);
	else printf("o numero %d e maior que %d \n",num2 ,num1);

	return 0;
	}
