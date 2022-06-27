// empurra item mazimo do vetor para a posição n-1 de V

#include <stdio.h>

void empurra(int v[],int n){	
	int maior,pos;
	maior=v[0];
	for (int i=0;i<=n-1;i++)
		if(maior<v[i]){
			pos=i;
			maior=v[i];
		}
	troca(v,maior,pos,n);


	
	}
int troca(int v[],int m, int p, int n){
	
	int aux;
	aux=v[n-1];
	v[n-1]=m;
	v[p]=aux;
	}


int exibe (int v[],int n){
	for(int i=0;i<n;i++)
		printf("%d \n",v[i]);
	}


int main (void){
	int v[5]={48,19,31,52,27};
	empurra(v,5);
	exibe(v,5);
	return 0;
	}



