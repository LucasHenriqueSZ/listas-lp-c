//versao recursiva de busca linear

#include <stdio.h>
int lsearch(int x,int v[],int n,int cont){
	if(cont<n){
		if(x==v[cont]){
			return 1+lsearch(x,v,8,cont+1);
			}else{
			return lsearch(x,v,8,cont+1);
			}
	  }else{
		return 0;
		}
	}


int main(void){
	int v[8]={66,80,27,48,57,75,19,52};
	printf("27: %d\n",lsearch(27,v,8,0));
	printf("51: %d\n",lsearch(51,v,8,0));
	return 0;
	}
