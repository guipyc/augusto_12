#include <stdio.h>

int main() {
    int matriz[3][3];

    printf("Digite os elementos da matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;

    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            soma += matriz[i][j];
        }
    }

    printf("Matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);

    return 0;
}
