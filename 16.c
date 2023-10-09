

#include <stdio.h>



#define NUM_ALUNOS 10

#define NUM_PROVAS 3



int main() {

    float notas[NUM_ALUNOS][NUM_PROVAS];

    int piorProva[NUM_ALUNOS] = {0};



    printf("Informe as notas dos %d alunos em %d provas:\n", NUM_ALUNOS, NUM_PROVAS);



    for (int i = 0; i < NUM_ALUNOS; i++) {

        printf("Aluno %d:\n", i + 1);

        for (int j = 0; j < NUM_PROVAS; j++) {

            printf("Prova %d: ", j + 1);

            scanf("%f", &notas[i][j]);

        }

    }



    for (int i = 0; i < NUM_ALUNOS; i++) {

        for (int j = 1; j < NUM_PROVAS; j++) {

            if (notas[i][j] < notas[i][piorProva[i]]) {

                piorProva[i] = j;

            }

        }

    }



    int piorProva1 = 0, piorProva2 = 0, piorProva3 = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {

        if (piorProva[i] == 0) {

            piorProva1++;

        } else if (piorProva[i] == 1) {

            piorProva2++;

        } else {

            piorProva3++;

        }

    }



    printf("Número de alunos com pior nota na prova 1: %d\n", piorProva1);

    printf("Número de alunos com pior nota na prova 2: %d\n", piorProva2);

    printf("Número de alunos com pior nota na prova 3: %d\n", piorProva3);



    return 0;

}
