/*

5 - Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que
eles foram lidos (um valor em cada linha).

*/

#include <stdio.h>

int main(void) {

	float a;
	float b;

	printf("Digite uma valor do tipo float: ");
	scanf("%f %f", &a, &b);
	printf("O valores inversos são:\n%f\n%f", b, a);
}
