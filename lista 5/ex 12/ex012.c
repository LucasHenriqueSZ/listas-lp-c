// sequencia de fibonacci

#include <stdio.h>

int fib(int n)                            
  {                   
    if (n == 1) return 1;                   
    else                                    
      if (n == 2) return 1;                 
   else return fib(n - 1) + fib(n - 2);  
}                                          

int main (void){
	int n;

	printf("Sequencia de fribonacci \n\n");
	printf("informe o n-esimo termo da sequencia de fribonacci  ");
	scanf("%d",&n);

	printf("o %d termo da sequencia de fribonacci e igual a %d \n",n,fib(n));



	return 0;
	}
