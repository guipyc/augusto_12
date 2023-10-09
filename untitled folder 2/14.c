#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CARTOES 5
#define NUM_LINHAS 5
#define NUM_NUMEROS 5
#define MAX_NUM 99

int gerarNumeroUnico(int numerosUtilizados[], int quantidadeUtilizados) {
    int numero;
    do {
        numero = rand() % (MAX_NUM + 1);
    } while (numerosUtilizados[numero] == 1);
    numerosUtilizados[numero] = 1;
    return numero;
}

void preencherCartao(int cartao[NUM_LINHAS][NUM_NUMEROS]) {
    int numerosUtilizados[MAX_NUM + 1] = {0};
    for (int i = 0; i < NUM_LINHAS; i++) {
        for (int j = 0; j < NUM_NUMEROS; j++) {
            cartao[i][j] = gerarNumeroUnico(numerosUtilizados, MAX_NUM);
        }
    }
}

void exibirCartao(int cartao[NUM_LINHAS][NUM_NUMEROS]) {
    for (int i = 0; i < NUM_LINHAS; i++) {
        for (int j = 0; j < NUM_NUMEROS; j++) {
            printf("%2d ", cartao[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));

    for (int i = 0; i < NUM_CARTOES; i++) {
        int cartao[NUM_LINHAS][NUM_NUMEROS];
        preencherCartao(cartao);
        printf("Cartela %d:\n", i + 1);
        exibirCartao(cartao);
        printf("\n");
    }

    return 0;
}
