// versao recursiva de bubble sort

#include <stdio.h>

void bsr(int v[],int n){	
	int maior,pos;
	maior=v[0];
	for (int i=0;i<=n-1;i++)
		if(maior<v[i]){
			pos=i;
			maior=v[i];
		}
	trocaemp(v,maior,pos,n);
	for (int i=1;i<=n-2;i++)
		for(int j=0;j<n-i;j++)
			if(v[j]>v[j+1])
				troca(v,j,j+1);


	
	}
int trocaemp(int v[],int m, int p, int n){
	
	int aux;
	aux=v[n-1];
	v[n-1]=m;
	v[p]=aux;
	}
int troca(int v[],int j, int i){
	
	int aux;
	aux=v[j];
	v[j]=v[i];
	v[j+1]=aux;
	}


int exibe (int v[],int n){
	for(int i=0;i<n;i++)
		printf("%d, ",v[i]);
	}


int main (void){
	int v[5]={48,19,31,52,27};
	bsr(v,5);
	exibe(v,5);
	
	printf("\n");
	return 0;
	}


/*

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

*/
