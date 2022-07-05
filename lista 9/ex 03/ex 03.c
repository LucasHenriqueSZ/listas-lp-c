//exibição de uma tabela ordenada por codigo

#include <stdio.h>

typedef struct{
	int dia;
	int mes;
	int ano;
}Data;

typedef struct{
int codigo;
	char nome[21];
	float salario;
	Data admissao;

}Func;

void ordenatab(Func v[],int n){
for(int i=1;i<=n-1;i++){
		for(int j=0;j<n-1;j++){
			if(v[j].codigo>v[j+1].codigo){
				 Func aux[]={v[j]};
				v[j]=v[j+1];
				v[j+1]=aux[0];
				}
		}
	}
}




void exibetab(Func v[],int n){
for(int i=0;i<n;i++){
	printf("%d, ",v[i].codigo);
	printf("%s, ",v[i].nome);
    printf("%.2f, ",v[i].salario);
	printf("%d /",v[i].admissao.dia);
	printf("%d /",v[i].admissao.mes);
	printf("%d \n",v[i].admissao.ano);

}
	}

int main (void){

Func v[]={{561,"Eva maranho",9200.00,{2,7,2012}},
		  {295,"ana teixeira",6100.00,{5,9,2015}},
		  {473,"denise teixeira",8500.00,{1,6,2013}},
		  {102,"catia telles",7300.00,{3,8,2014}},
		  {384,"beatriz lira",5400.00,{4,9,2016}}};
	ordenatab(v,5);
	exibetab(v,5);

return 0;
}

