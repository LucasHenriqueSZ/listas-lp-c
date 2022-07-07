//ultimo item da lista


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

void Ultimo (Lista L){
while (L!=NULL){
		if(L->prox==NULL){printf("%d \n",L->item);}
		L=L->prox;
	}

}

int main (void){
	Lista I = no(3,no(1,no(5,NULL)));
	printf("Ultimo = ");Ultimo(I);
	return 0;
}
