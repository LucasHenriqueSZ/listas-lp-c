//aloca��o dinamica
//programa para cria��o e exibi��o

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
while (L!=NULL){
	printf("%d\n",L->item);
		L=L->prox;
	}
}

int main (void){
	Lista I = no(3,no(1,no(5,NULL)));
	Exibe(I);
return 0;
}
