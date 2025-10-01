#include <stdio.h>

/**
    16.  (QUIM 84) Dada uma seqüência   x1, x2, ..., xk de números inteiros,
    verifique se existem dois segmentos consecutivos iguais nesta seqüência, isto é, se existem i e m tais que:
    xi, xi+1,..., xi+m-1 = xi+m, xi+m+1,..., xi+2m-1

    Imprima, caso existam, os valores de i e m.
    Exemplo: Na seqüência  7, 9, *5, 4, 5, 4*, 8, 6 existem i=3 e m=2.
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