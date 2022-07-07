//diferença de ponteiros

#include <stdio.h>

int Len(char *s)
{
	char *ptr=s;//s=&s[0]
	while (*s!='\0')
		s++;
	return (int) (s-ptr);
}

int main (void){
	printf("%d\n",Len("teste"));
	return 0;
	}


