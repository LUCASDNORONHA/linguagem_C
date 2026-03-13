/*

3 - Faça um programa que solicite a entrada do dia/mês/ano e a hora:minutos,
depois imprima o resultado na seguinte formatação:
Data: DD/MM/AA
Hora: HH:mm

*/

#include <stdio.h>

int main(void) {

	int dia;
	int mes;
	int ano;
	int hora;
	int minuto;

	printf("========================================\n");
	printf("Digite o dia (DD): ");
	scanf("%d", &dia);
	printf("Digite o mês (MM): ");
	scanf("%d", &mes);
	printf("Digite o ano (AA): ");
	scanf("%d", &ano);

	printf("=========================================\n");
	printf("Digite a hora: ");
	scanf("%d", &hora);
	printf("Digite os minutos: ");
	scanf("%d", &minuto);;

	printf("========================================\n");
	printf("Data: %d/%d/%d", dia, mes, ano);
	printf("\nHora: %d:%d", hora, minuto);
	
}
