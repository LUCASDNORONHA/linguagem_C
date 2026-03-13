/* 

1 - Escreva um programa que leia um valor inteiro pelo teclado e imprima a
mensagem:
Valor lido: n
onde n é o valor lido pelo programa.
*/

#include <stdio.h>

int n;

int main(void) {
	

	printf("Digite um valor inteiro: ");
	scanf("%d", &n);
	printf("Valor lido foi %d", n);
}
