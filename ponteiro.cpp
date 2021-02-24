#include <stdio.h>

int c[3] = {2,3,4};
int *pc;

int main ()
{
	for (pc = &c[0];pc < &c[3]; pc++){
		//pc = &c[0];
		//pc++;
		printf("%d \n", *pc);
	}
}
