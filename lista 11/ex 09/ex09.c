//pertinencia em lista

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
void Pertence(Lista A,Lista B,Lista x){
	while(A!=NULL){
		while(B!=NULL){
			if(A->item==B->item){printf("%d\n",A->item);}
			B=B->prox;
			}
			B=x;
		A=A->prox;
		}
	}

int main (void){
	Lista H = no(8,no(4,no(3,NULL)));
	Lista I = no(3,no(1,no(5,NULL)));
	printf("H = ");Exibe(H);
	printf("I = ");Exibe(I);
	Pertence(H,I,I);
	return 0;
}
