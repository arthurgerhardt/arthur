//Estrutura de decis�o if, else if else
//						se, ent�o, ent�o se
#include <stdio.h>

int main() {
	//Declara��o de vari�veis
	int idade;
	printf("Qual a sua idade:  \n");
	scanf_s("%d", &idade);
	//Processamento de dados
	if (idade < 18) {
		printf("Voce eh menor de idade. \n");
		}
	else 
		if (idade > 18 && idade < 60) {
			printf("Voce eh adulto. \n");
		}
		else {
			printf("Voce eh idoso.\n");
		}
	//Sa�da de dados
	printf("A sua idade eh: %d \n", idade);
	return 0;
	}