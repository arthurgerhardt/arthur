#include <stdio.h>
// Estrutura de repeti��o for, while e do...while.
//							para, enquanto e fa�a....enquanto
int main() {
	int numero, soma = 0;
	for (int i = 0; i < 5; i++) {
		printf("Digite um numero: ");
		scanf_s("%d", &numero);
		soma = soma + numero;
	}	
	printf("A soma eh %d .", soma);
	return 0;
}