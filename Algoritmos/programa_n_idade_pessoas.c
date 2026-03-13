/*

Linguagem C- prática

2. Faça um programa que, para um número
indeterminado de pessoas: leia a idade de cada
uma, sendo que a idade 0 (zero) indica o fim da
leitura e não deve ser considerada. Em seguida
calcule:
• o número de pessoas;
• a idade média do grupo;
• a menor idade e a maior idade.

*/

#include <stdio.h>

int main(void) {

	int contador;
	int idade;
	int soma;
	int menor;
	int maior;
	int media;
	int minimo;
	int maximo;

	printf("Calculando a média das idades N individuos.\nObserção: a medidas estatística só serão possível de visualizar se ao menos 2 idade forem adicionadas.");

	while (1) {
		printf("===============================");
		printf("Digite a idade ou 0 para encerrar o programa: ");
		scanf("%d", &idade);

		if (idade == 0) {
			printf("Programa encerrado.");
			break;
		} else {
			contador += 1;
			soma += idade;
			media = soma / contador;
			printf("Uma pessoa adicionada.");

			minimo = idade;
			maximo = idade;

			if ( idade <=  minimo) {
				menor = idade;
			};

			if ( idade >= maximo) {
				maior = idade;
			};
		};
		if (contador > 1) {
			char a;
			printf("==============================");
			printf("\nDeseja visualizar as medidas estatísticas? (s) para sim e (n) para não: ");
			scanf("%c", &a);
			if (a == 's') {
				printf("\nMédia das idades = %d", media);
				printf("\nMenor valor = %d", menor);
				printf("\nMaior valor = %d", maior);
				printf("\nQuantidade de idades = %d", contador);
			}
		}
		continue;
	};
}
