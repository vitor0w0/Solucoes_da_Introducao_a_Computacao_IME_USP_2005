#include <stdio.h>

/**
*   2.  Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de testes.
*   A prova consta de 30 questões, cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso são dados:
    - o cartão gabarito;
    - o número de alunos da turma;
    - o cartão de respostas para cada aluno, contendo o seu número e suas respostas.
 */
int main() {
    char res[30];
    printf("Digite o cartao gabarito: ");
    for (int i = 0; i < 30; i++) {
        scanf(" %c", res+i);
    }

    int alunos;
    printf("Digite qtd de alunos: ");
    scanf("%d", &alunos);
    int notas[alunos];
    for (int i = 0; i < alunos; ++i) {
        notas[i] = 0;
    }

    for (int i = 0; i < alunos; i++) {
        printf("Digite cartao-resposta de aluno %d: ", i+1);
        for (int j = 0; j < 30; j++) {
            char nota;
            scanf(" %c", &nota);
            if (nota == res[j])
                notas[i]++;
        }
    }
    for (int i = 0; i < alunos; ++i) {
        printf("Aluno %d, nota: %d\n", i+1, notas[i]);
    }
    return 0;
}