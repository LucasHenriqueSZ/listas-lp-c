//histograma

#include <stdio.h>
#include <conio.h>
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
void histograma(float v[7], int m){
	int cont,color;
for(int i=1;i<=7;i++){
		cont=v[i];
		_textcolor(15); printf("%d%c",i,248);
		if(v[i]==m){color=2;}else if(v[i]<m){color=1;}else{color=4;}
	for(int x=1;x<=cont;x++){
		_textcolor(color);	_putch(219);
		}
			printf("\n\n");
	}
}
int main (void){
	float v[7];
	preenche(v);
	printf("\n");
	histograma(v,media(v));
	_textcolor(15);printf("media = %.1f %cC\n",media(v),248);
	
	return 0;
	 }
