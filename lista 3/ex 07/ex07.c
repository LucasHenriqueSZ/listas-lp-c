/*
		digito verificador
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

int soma=0, dig,conta, aux, rest;
	printf("Informe o numero da conta sem o digito: ");
	scanf("%d", &conta);
		while ((conta < 1) || (conta > 999999)) {
			printf("Conta Invalida. Reinforme o numero da conta sem o digito: ");
			scanf("%d", &conta);
		}
	aux = conta;
		while (aux > 0) {
			rest = aux % 10;
			soma += rest;
			aux /= 10;
		}
	dig = soma % 10;
		printf("Numero de conta completo: %.6d-%d\n", conta, dig);
return 0;

}
