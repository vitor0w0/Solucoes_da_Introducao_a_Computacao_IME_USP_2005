#include <stdio.h>
/**
* 3 - Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
* Exemplo: Para n=4 a saída deverá ser 1,3,5,7.
 */
int main(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; n > 0; i += 2) {
        printf("%d ", i);
        n--;
    }
    putchar('\n');
    return 0;
}