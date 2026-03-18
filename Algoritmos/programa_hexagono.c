/*

Faça um programa para calcular a área e o perímetro de um hexágono. O programa deve implementar uma função chamada calc_hexa que calcula a área e o perímetro de um hexágono regular de lado L. O programa deve solicitar ao usuário o lado do polígono, calcular e imprimir a área e o perímetro do polígono. O programa termina quando for digitado um valor negativo qualquer para o lado.
Dicas:
Utilize a assinatura: void calcula_hexa(float l, floar *area, float *perimetro);
Cálculo da área de um hexágono:
Utilize a biblioteca math.h.

*/

#include <stdio.h>
#include <math.h>

void calcula_hexa(float l, float *area, float *perimetro) {

    *area = (3 * sqrt(3) / 2) * l * l;
    *perimetro = 6 * l;
}

int main(void) {

    float lado;
    float area;
    float perimetro;

    while (1) {

        printf("Digite o lado do hexagono (valor negativo para sair): ");
        scanf("%f", &lado);

        if (lado < 0)
            break;

        calcula_hexa(lado, &area, &perimetro);

        printf("Area = %.2f\n", area);
        printf("Perimetro = %.2f\n\n", perimetro);
    }

    printf("Programa encerrado.\n");

    return 0;
}
