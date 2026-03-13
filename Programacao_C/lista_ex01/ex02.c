/*

2 - Faça um programa que leia um valor float pelo teclado e depois o imprima
usando o formato “%f”, veja o que aconteceu.

*/

#include <stdio.h>

int main(void) {
	float n;

	printf("Digite um valor float: ");
	scanf("%f", &n);
	printf("Valor digitado foi %f", n);
}

