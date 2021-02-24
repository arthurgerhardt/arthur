#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, NUM[15];
	
	//lendo valores
	for(i=0;i<5;i++) {
		printf("Informe um numero: \n");
		scanf("%d",&NUM[i]);
	}
	
	//Imprimindo os valores
	for(i=0;i<5;i++) {
		printf("Numero: %d \n", NUM[i]);
	}
}
