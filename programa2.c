// Calculando o IMC
#include<stdio.h>
int main() {
	float peso, imc, altura;
	printf ("Qual eh a sua altura? ");
	scanf_s("%f", &altura);
	printf("Qual eh o seu peso? ");
	scanf_s("%f", &peso);
	printf ("A sua altura eh de: %f metros. \n \n", altura);
	// IMC = peso / (altura + altura);
	imc = peso / (altura + altura);
	printf("Seu IMC e %.1f.\n\n", imc);
	if (imc <= 18.5)
		printf("Parabens! Voce esta abaixo do peso. \n \n");
	else
		if (imc <= 24.9)
			printf("Boa. Voce esta no seu peso ideal. \n \n");
		else
			if (imc <= 29.9)
				printf("Se cuida. Voce esta sobrepeso. \n \n");
			else
				if (imc <= 39.9)
					printf("Va fazer exercicios.Voce esta obeso. \n \n");
				else
					printf("Voce esta com obesidade morbida. \n \n");
	return 0;
}