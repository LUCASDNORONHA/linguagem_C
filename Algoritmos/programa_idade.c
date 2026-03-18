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

#include <stdio.h>

int main(void) {

    int idade;
    int contador = 0;
    int soma = 0;
    int menor, maior;

    printf("Calculando a media das idades.\n");

    while (1) {

        printf("\nDigite a idade ou 0 para encerrar: ");
        scanf("%d", &idade);

        if (idade == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        contador++;
        soma += idade;

        if (contador == 1) {
            menor = idade;
            maior = idade;
        }

        if (idade < menor)
            menor = idade;

        if (idade > maior)
            maior = idade;

        if (contador > 1) {

            char a;

            printf("Deseja ver as estatisticas? (s/n): ");
            scanf(" %c", &a);

            if (a == 's') {
                printf("\nMedia = %d\n", soma / contador);
                printf("Menor idade = %d\n", menor);
                printf("Maior idade = %d\n", maior);
                printf("Quantidade = %d\n", contador);
            }
        }
    }
}
