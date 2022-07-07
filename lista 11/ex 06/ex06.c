//programa para anexação

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
void anexa(Lista *A,Lista B){
	if(!B) return;
	while(*A)
		A=&(*A)->prox;
	*A=B;
	}

int main (void){
	Lista H = no(8,no(4,NULL));
	Lista I = no(3,no(1,no(5,NULL)));
	printf("H = ");Exibe(H);
	printf("I = ");Exibe(I);
	printf("Pressione enter"); getchar();
	anexa(&H,I);
	printf("H = ");Exibe(H);
	printf("I = ");Exibe(I);
	return 0;
}
