/* fatorial */
#include <stdio.h>

int main (void){
	float n,fat;

	printf("calcular fatorial de:  ");
	scanf("%f",&n);
	fat=1;
	if(n<=0){
			printf("valor invalido ou fatorial de 0!=1 \n");
		}else{
			for(int i=1;i<=n;i++){
				fat*=i;
			}
		printf("o fatorial de %.0f e igual a: %.0f!= %.0f \n",n,n,fat);

		}	
	return 0;
	}
