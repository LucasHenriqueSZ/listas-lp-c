//minimo e maximo de uma sequencia utilizando ponteiros

#include <stdio.h>

void MiniMax(int *v, int n, int *min, int *max){
    int i;
    *min = *v;
    *max = *v;
    for(i = 1; i < n; i++){
        if(*min > *(v + i))
            *min = *(v + i);
        if(*max < *(v + i))
            *max = *(v + i);
    }
}

int main (void){
	int v[5]={26,55,89,14,77};
	int min,max;
		MiniMax(v,5,&min,&max);
	printf("min: %d\n",min);
	printf("max: %d\n",max);
	return 0;
	}


