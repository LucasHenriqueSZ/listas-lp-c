//alocação dinamica
//outra forma de exibição


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

int main (void){
	Lista I = no(3,no(1,no(5,NULL)));
	Exibe(I);
return 0;
}
