// total de uma folha de pagamento

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


void exibetab(Func v[],int n){
	float soma;
for(int i=0;i<n;i++){
	printf("%d, ",v[i].codigo);
	printf("%s, ",v[i].nome);
    printf("%.2f, ",v[i].salario);
	printf("%d/",v[i].admissao.dia);
	printf("%d/",v[i].admissao.mes);
	printf("%d \n",v[i].admissao.ano);
		 soma=v[i].salario+soma;

}
	printf("a soma total dos salarios e %.2f \n",soma);
	}

int main (void){

Func v[]={{561,"Eva maranho",9200.00,{2,7,2012}},
		  {295,"Ana teixeira",6100.00,{5,9,2015}},
		  {473,"Denise teixeira",8500.00,{1,6,2013}},
		  {102,"Catia telles",7300.00,{3,8,2014}},
		  {384,"Beatriz lira",5400.00,{4,9,2016}}};
	exibetab(v,5);

return 0;
}

