// contagem progressiva

#include <stdio.h>

void cp(int n,int i){
    printf("%d ", i);
    if (i==n) {
        return;
    } else {
        cp(n,i+1);
    }
}

int main (){
    int n;
    int i=0;
    printf("num?\n");
    scanf("%d", &n);
    cp(n,i);
	  printf("\n");
    return 0;
}
