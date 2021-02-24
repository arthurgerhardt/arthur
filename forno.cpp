#include <stdio.h>
#include <stdlib.h>

int main () {
	float Temp = 0;
	float ajusteTemp = 70;
	int fogo = 100;
	int alarme = 0;
	
	while(1) {
		if(Temp > ajusteTemp) {
			printf("Entre com a temperatura: \n ");
			fogo = 10;
			alarme = 1;
		}
		else {
			fogo = 100;
			alarme = 0;
		}
	}
}
