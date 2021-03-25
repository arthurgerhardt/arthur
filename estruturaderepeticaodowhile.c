#include <stdio.h>

int main() {
	int numero, soma = 0;
	printf("Digita o numero desejado: ");
	scanf_s("%d", &numero);
	do {
		printf("Digita o numero desejado: ");
		scanf_s("%d", &numero);
		soma = soma + numero;
	}
	while (numero != 0);
	printf("A soma dos numeros eh %d", soma);
	return 0;
}
	
