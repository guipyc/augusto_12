
#include <stdio.h>



int main() {

    int matriz[5][4];

    int maiorNotaFinal = -1;

    int matriculaMaiorNota = -1;

    float somaNotasFinais = 0;



    printf("Informe os dados dos alunos:\n");



    for (int i = 0; i < 5; i++) {

        printf("Aluno %d:\n", i + 1);

        printf("Matrícula: ");

        scanf("%d", &matriz[i][0]);

        printf("Média das provas: ");

        scanf("%d", &matriz[i][1]);

        printf("Média dos trabalhos: ");

        scanf("%d", &matriz[i][2]);


        matriz[i][3] = matriz[i][1] + matriz[i][2];



        if (matriz[i][3] > maiorNotaFinal) {

            maiorNotaFinal = matriz[i][3];

            matriculaMaiorNota = matriz[i][0];

        }



        somaNotasFinais += matriz[i][3];

    }



    float mediaNotasFinais = somaNotasFinais / 5;



    printf("Matrícula do aluno com a maior nota final: %d\n", matriculaMaiorNota);



    // Imprime a média aritmética das notas finais

    printf("Média aritmética das notas finais: %.2f\n", mediaNotasFinais);



    return 0;

}
