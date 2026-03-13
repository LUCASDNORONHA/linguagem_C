/*

6 - Escreva um programa que receba um número inteiro de 3 dígitos e imprima este
número na ordem inversa, por exemplo, se entrar com o número 241, deve imprimir
o número 142 como resultado.

*/

#include <stdio.h>

int main(void) {
    int n;
    char s[10];

    printf("Digite um numero: ");
    scanf("%d", &n);

    sprintf(s, "%d", n);

    for (int i = 0; s[i] != '\0'; i++);

    int len = 0;
    while (s[len] != '\0')
        len++;

    printf("Numero invertido: ");

    for (int i = len - 1; i >= 0; i--)
        putchar(s[i]);

    printf("\n");

    return 0;
}
