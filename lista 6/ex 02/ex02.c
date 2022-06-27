//temperatura media

#include <stdio.h>

float preenche(float v[7]){
	for(int i=1;i<=7;i++){
		printf("%d  a temperatura? ",i);
		scanf("%f",&v[i]);
		}
	
	}

float media (float v[7]){
	float m;
	for(int i=1;i<=7;i++){
		m+=v[i];
		}
	m=m/7;
	return m;
	}

int conta (float v[7], int m){
	int c;
	for(int i=1;i<=7;i++){
	if(v[i]>m)c+=1;
		}
	return c;
	}

int main (void){
	float v[7];
	preenche(v);

	float m= media(v);
	printf("media: %.1f %cC\n",m,248);
	printf ("dias acima da media: %d\n",conta(v,m));

	return 0;
	}
