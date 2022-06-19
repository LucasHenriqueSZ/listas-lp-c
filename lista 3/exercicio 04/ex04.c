/* potencia */
#include <stdio.h>

int main (void){
	
	int x,n;
	float pot;

	printf("informe o valor de X: \n");
	scanf("%d",&x);
	printf("informe o valor de n: \n");
	scanf("%d",&n);
	pot=x;

	if(n==0){
			printf("o resultade da potencia e igual a: 1 \n");
		}else{
			for(int i=1;i<n;i++){
			pot=pot*x;
			}
		printf("o resultade da potencia e igual a: %.0f\n",pot);
		}
	return 0;
	}
