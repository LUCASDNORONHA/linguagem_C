#include <stdio.h>

// declaração das variáveis globalmente
int matriz [10][10];
int valor = 99;

// declaração do protótipo
void add_values(int, int, int);
void imprimir(int , int, int);

// programa principal
void main() {
	add_values(10, 10, matriz);
	printf("Matriz criada");
	imprimir_m(matriz);
}

// definação das funções
void imprimir_m(int linhas, int colunas, int m[linhas][colunas]) {
	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

void add_values(int linhas, int colunas, int m[linhas][colunas]) {
	for (int i = 0; i < 10; i++){
		for( int j = 0; j < 10; j++) {
		matriz[i][j] = valor;
		valor--;
		}
	}
}

