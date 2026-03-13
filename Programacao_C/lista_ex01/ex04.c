/*

4 - Faça um programa que leia três caracteres do tipo char e depois os imprima um
em cada linha. Use um único comando printf() para a impressão.

*/

#include <stdio.h>

int main(void) {
	char a;
	char b;
	char c;

	printf("Digite um caracter: ");
	a = getchar();
	getchar();

	printf("Digite um caracter: ");
	b = getchar();
	getchar();

	printf("Digite um caracter: ");
	c = getchar();
	getchar();

	printf("Os carecteres recebidos são:\n");
	putchar(a);
	putchar('\n');
	putchar(b);
	putchar('\n');
	putchar(c);
	putchar('\n');

}

