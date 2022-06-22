//calculo da serie harmonica

#include <stdio.h>

float h(n){
	  if(n == 1)
          return 1;
      else
          return((float)1/n + h(n - 1));
	}

int main (void){
	int n;
	printf ("num? ");
	scanf("%d",&n);
	printf("harmonica = %.2f\n",h(n));
	return 0;
	}
