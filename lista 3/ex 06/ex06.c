/* terminal */
#include <stdio.h>

int main (void){
	int n,ter;

	printf("calcular terminal do numero:  ");
	scanf("%d",&n);
	
	if(n<=0){
			printf("valor invalido ou terminal de 0=0 \n");
		}else{
			for(int i=1;i<=n;i++){
				ter+=i;
			}
		printf("o terminal de %.d e igual a:  %.d \n",n,ter);

		}	
	return 0;
	}
