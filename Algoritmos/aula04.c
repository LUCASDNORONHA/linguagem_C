#include <stdio.h>

// Definindo e imprimindo constante em C.
int main(void) {
	const int AGE = 27;
	#define AGE2 28
	printf("Valor constante AGE = %d e constante AGE2 = %d\n", AGE, AGE2);
}
