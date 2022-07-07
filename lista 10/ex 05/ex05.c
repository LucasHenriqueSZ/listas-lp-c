//soma de uma sequencia de inteiros utilizando ponteiros

#include <stdio.h>

float Soma(float v[],int n){
	float sm;
	for(int i=0;i<=n;i++){
		sm+=*(v+i);
		}
	return sm;
	}


int main (void){
	float v[3]={2.5,1.5,3.0};
	printf("%.1f\n",Soma(v,3));
	return 0;
	}


