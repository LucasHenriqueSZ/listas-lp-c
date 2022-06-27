// teste da função bsort()


#include <stdio.h>

void bsort(int v[],int n){
	for (int i=1;i<=n-1;i++)
		for(int j=0;j<n-i;j++)
			if(v[j]>v[j+1])
				troca(v,j,j+1);
	}
int troca(int v[],int j, int i){
	
	int aux;
	aux=v[j];
	v[j]=v[i];
	v[j+1]=aux;
	}


int exibe (int v[],int n){
	for(int i=0;i<n;i++)
		printf("%d \n",v[i]);
	}


int main (void){
	int v[10]={83,31,91,46,21,20,96,25,96,80};
	bsort(v,10);
	exibe(v,10);
	return 0;
	}
