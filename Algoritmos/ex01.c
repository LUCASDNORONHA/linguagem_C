#include <stdio.h>

int main(void) {
	int notas[5];

	printf("Adicionando 5 valores do tipo inteiro e exibindo na tela.\n");
	printf("Digite o primeiro valor: ");
	scanf("%d", &notas[0]);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &notas[1]);
	printf("\nDigite o terceiro valor: ");
	scanf("%d", &notas[2]);
	printf("\nDigite o quarto valor: ");
	scanf("%d", &notas[3]);
	printf("\nDigite o quinto valor: ");
	scanf("%d", &notas[4]);
	
	for(int i = 0; i < 5; i++) {
	printf("%d\n", notas[i]);
	}
}
