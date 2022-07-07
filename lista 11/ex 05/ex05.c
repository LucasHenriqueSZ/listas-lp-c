//soma dos itens da lista

#include <stdio.h>
#include <stdlib.h>
typedef int Item;


typedef struct no{

 Item item;
	struct no *prox;
} *Lista;

Lista no(Item x, Lista p){
	Lista n = malloc(sizeof(struct no));
	n -> item = x;
	n -> prox = p;
	return n;
}

void Exibe (Lista L){
	printf("[");
while (L!=NULL){
		
	printf("%d",L->item);
		if(L->prox==NULL){L=L->prox;printf("] \n");}else{L=L->prox;printf(",");}
		
	}

}

int soma(Lista L){
	int s=0;
	while(L){
		s+=L->item;
		L=L->prox;
		}
	return s;
	}

int main (void){
	Lista I = no(3,no(1,no(5,NULL)));
	Exibe(I);
	printf("soma = %d\n",soma(I));

	return 0;
}
