#include <stdio.h>
/***
 *  6 - Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e suas notasda primeira
 * prova, determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0).
 */
int main(void) {
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    int maior=-1, menor=101, nota;
    for (int i = 0; i < n; i++) {
        printf("Digite uma nota: ");
        scanf("%d", &nota);
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
    }
    printf("A maior nota de todas foi %d. A menor foi %d\n", maior, menor);
    return 0;
}