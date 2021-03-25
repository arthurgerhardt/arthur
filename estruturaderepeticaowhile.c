#include <stdio.h>
// Estrutura de repetição
// While
int main() {
	int numero, soma = 0;
	printf("Entre com o numero desejado: ");
	scanf_s("%d", &numero);
	while (numero != 0) {
		soma = soma + numero;
		printf("Entre com o numero desejado: ");
		scanf_s("%d", &numero);
	}
	printf("A soma dos numeros eh %d .", soma);
	return 0;
}