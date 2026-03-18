/*

Escreva um programa que declare uma matriz 10x10 de inteiros. 
Crie uma função void para preencher a matriz com números de 99 a 0, usando ponteiro para matriz como parâmetro
Por fim, o programa deve imprimir a matriz.
*/

#include <stdio.h>

void preencher(int (*m)[10]) {

    int valor = 99;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            m[i][j] = valor;
            valor--;
        }
    }
}

void imprimir(int (*m)[10]) {

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
}

int main(void) {

    int matriz[10][10];

    preencher(matriz);

    printf("Matriz gerada:\n\n");

    imprimir(matriz);

    return 0;
}
