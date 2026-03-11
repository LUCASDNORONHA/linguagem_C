#include <stdio.h>

int main(void) {
	int matrix[3][3];

	printf("Armazenando 9 valores inteiros em uma matriz 3 x 3.");
	
	printf("\nPrimeira matriz.");
	printf("\nDigite primeiro valor: ");
	scanf("%d", &matrix[0][0]);
	printf("\nDigite segundo valor: ");
	scanf("%d", &matrix[0][1]);
	printf("\nDigite terceiro valor: ");
	scanf("%d", &matrix[0][2]);
	
	printf("\nSegunda matriz.");
        printf("\nDigite primeiro valor: ");
        scanf("%d", &matrix[1][0]); 
        printf("\nDigite segundo valor: ");
        scanf("%d", &matrix[1][1]);
        printf("\nDigite terceiro valor: ");
        scanf("%d", &matrix[1][2]);
	
	printf("\nTerceira matriz.");
        printf("\nDigite primeiro valor: ");
        scanf("%d", &matrix[2][0]); 
        printf("\nDigite segundo valor: ");
        scanf("%d", &matrix[2][1]);
        printf("\nDigite terceiro valor: ");
        scanf("%d", &matrix[3][2]);
	
	for(int i = 0; i  < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("[%d]", matrix[i][j]);
		}
		printf("\n");
	}
}
