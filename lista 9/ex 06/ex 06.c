//cadastro de livros 

#include <stdio.h>
#include <conio.h>
typedef struct{
	char titulo[21];
	char autor[21];
	int ano;
}Func;
void exibetab(Func Livro[],int n){
for(int i=0;i<n;i++){
	printf("|%s |",Livro[i].titulo);
	printf("%s |",Livro[i].autor);
    printf("%d |\n",Livro[i].ano);
}
}
int main (void){
_textbackground(15);_textcolor(1);	printf(   "|Titulo        |Autor            |Ano  |\n" );_textcolor(0);
Func Livro[]={{"Frankenstein.","Mary shelley....",1818},
		  	 {"Dracula......","Bram Stoker.....",1897},
		  	 {"Carmilla.....","Sheridan Le Fanu",1872},
		  	 {"Varney.......","Thomas Prest....",1847}};
	exibetab(Livro,4);
return 0;
}
