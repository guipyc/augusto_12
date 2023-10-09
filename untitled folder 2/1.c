
#include <stdio.h>
#include <stdlib.h>
int main() {

    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}

    };


    int maior10 = 0;


    for (int linha = 0; linha < 4; linha++) {

        for (int coluna = 0; coluna < 4; coluna++) {

            if (matriz[linha][coluna] > 10) {

                maior10++;

            }

        }

    }


    printf("A Matriz possui %d valores > que 10.", maior10);


    return 0;

}
