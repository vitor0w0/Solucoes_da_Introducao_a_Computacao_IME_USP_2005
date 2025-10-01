#include <stdio.h>
// 2 - Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
int main(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    const int soma = (n+1)*n/2;
    printf("Soma dos %d primeiros numeros: %d\n", n, soma);
    return 0;
}