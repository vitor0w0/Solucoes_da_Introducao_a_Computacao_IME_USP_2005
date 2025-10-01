#include <stdio.h>
/**
 * 15 0  Em uma classe há n alunos, cada um dos quais realizou k provas com pesos distintos.
 * Dados n, k, os pesos das k provas e as notas de cada aluno, calcular a média ponderada das provas para cada aluno e
 * a média aritmética da classe em cada uma das provas.
 */
int main() {
    int n, k;
    printf("Digite n e k: ");
    scanf("%d %d", &n, &k);

    float alunos[n];
    for (int i = 0; i < n; i++)
        alunos[i] = 0;

    float pesos[k], div = 0;
    printf("Pesos de cada prova: ");
    for (int i = 0; i < k; i++){
        scanf("%f", &pesos[i]);
        div += pesos[i];
    }

    float media[k];
    for (int i = 0; i < k; ++i)
        media[i] = 0;

    for (int i = 0; i < n; i++) {
        float nota, soma = 0;
        for (int j = 0; j < k; ++j) {
            scanf("%f", &nota);
            soma += nota*pesos[j];
            media[j] += nota;
        }
        printf("Media do %d aluno: %.2f\n", i+1, soma/div);
    }
    for (int i = 0; i < k; ++i) {
        printf("Media da prova %d: %.2f\n", i+1, media[i]/(float)n);
    }
    return 0;
}