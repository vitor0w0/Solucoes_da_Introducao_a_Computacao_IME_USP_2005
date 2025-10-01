#include <stdio.h>
/**
 *  8 - Para n alunos de uma determinada classe são dadas as 3 notas das provas. Calcular a média aritmética das provas de cada aluno,
 *  a média da classe, o número de aprovados e o número de reprovados (critério de aprovação: média maior ou igual a cinco).
 */
int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int aprovado = 0, reprovado = 0;
    float media = 0;
    for (int i = 1; i <= n; i++) {
        float nota, soma = 0;
        for (int j = 1; j <= 3; j++) {
            printf("Digite nota %d do aluno %d: ", j, i);
            scanf("%f", &nota);
            soma += nota;
        }
        soma = soma/3;
        if (soma >= 5){
            printf("Media = %.2f\n", soma);
            aprovado++;
        } else {
            printf("Media = %.2f\n", soma);
            reprovado++;
        }
        media += soma;
    }
    printf("Media geral dos alunos: %.3f\n", media/n);
    return 0;
}
