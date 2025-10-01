#include <stdio.h>
/**
    5.  (a) Escreva uma função que recebe um inteiro positivo m e devolve 1 se m é primo, 0 em caso contrário.
    (b) Escreva um programa que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.
*/
int primo(int);
int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    unsigned int soma = 0;
    for (int i = 1, j = 0; j < n; i++) {
        if (primo(i)) {
            soma += i;
            j++;
        }
    }
    printf("%d\n", soma);
    return 0;
}
int primo(const int m) {
    if (m == 1)
        return 0;
    if (m == 2)
        return 1;
    for (int i = 2; i*i <= m; ++i) {
        if (m%i==0) {
            return 0;
        }
    }
    return 1;
}