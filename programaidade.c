#include <stdio.h>

int main ()
{
	int idade;

	printf("Qual eh a sua idade? ");
	scanf_s("%d", &idade);
	printf("A idade eh de: %d", idade);
	return 0;
	system("PAUSE");
}