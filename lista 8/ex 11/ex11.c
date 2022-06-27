//exibição de vetor de string

#include <stdio.h>

void exibe(char v[][8],int n){
	for(int i=0;i<n;i++){
		puts(v[i]);
		}
	}

int main(void){
	char v[][8]={"eduardo",
				 "catia",
				 "ana",
				 "lucas",
				 "lucia",
				 };
	int n=5;
	exibe(v,n);

	return 0;
	}
