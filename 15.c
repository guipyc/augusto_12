



#include <stdio.h>



#define NUM_ALUNOS 5

#define NUM_QUESTOES 10



int calcularPontuacao(char respostasAluno[NUM_QUESTOES], char gabarito[NUM_QUESTOES]) {

    int pontuacao = 0;

    for (int i = 0; i < NUM_QUESTOES; i++) {

        if (respostasAluno[i] == gabarito[i]) {

            pontuacao++;

        }

    }

    return pontuacao;

}



int main() {

    char respostasAlunos[NUM_ALUNOS][NUM_QUESTOES];

    char gabarito[NUM_QUESTOES];

    int resultados[NUM_ALUNOS];



    printf("Informe as respostas dos %d alunos (A, B, C):\n", NUM_ALUNOS);

    for (int i = 0; i < NUM_ALUNOS; i++) {

        printf("Aluno %d: ", i + 1);

        for (int j = 0; j < NUM_QUESTOES; j++) {

            scanf(" %c", &respostasAlunos[i][j]);

        }

    }



    printf("Informe o gabarito das respostas (A, B, C):\n");

    for (int i = 0; i < NUM_QUESTOES; i++) {

        scanf(" %c", &gabarito[i]);

    }



    for (int i = 0; i < NUM_ALUNOS; i++) {

        resultados[i] = calcularPontuacao(respostasAlunos[i], gabarito);

    }



    printf("Pontuações dos alunos:\n");

    for (int i = 0; i < NUM_ALUNOS; i++) {

        printf("Aluno %d: %d pontos\n", i + 1, resultados[i]);

    }



    return 0;

}
