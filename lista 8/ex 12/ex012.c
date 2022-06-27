//ordenação de vetor string

#include <stdio.h>
#include <string.h>

void exibe(char v[][8],int n){
	for(int i=0;i<n;i++){
		puts(v[i]);
		}
	}


char bsort(char v[][8], int n){
	char x[8];
	 for(int i=1;i<=n;i++)
	for(int j=0;j<n-i;j++)
	  if(strcmp(v[j],v[j+1])>0)
	  { 
        strcpy(x,v[j]);
	    strcpy(v[j],v[j+1]);
	    strcpy(v[j+1],x);
	  }
			}

int main (void){
	char v[][8]={"eduardo",
				 "catia",
				 "ana",
				 "lucas",
				 "bruna",
				 };
	int n=5;
	bsort(v,n);
	exibe(v,n);
	return 0;
	}
