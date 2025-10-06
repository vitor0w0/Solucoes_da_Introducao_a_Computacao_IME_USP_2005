#include <stdio.h>
// 1 - Dados n e n seqüências de números inteiros não-nulos, cada qual seguida por um 0, calcular a soma dos números pares de cada seqüência.
int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        printf("===Sequencia %d===\n", i);
        int num = -1;
        while (num != 0) {
            printf("Digite um numero: ");
            scanf("%d", &num);
            if (num%2==0) {
                soma += num;
            }
        }
        printf("Soma dos pares: %d\n", soma);
        soma = 0;
    }
    return 0;
}