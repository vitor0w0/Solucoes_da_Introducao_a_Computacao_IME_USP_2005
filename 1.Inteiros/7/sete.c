#include <math.h>
#include <stdio.h>
// 7 - Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.
int main(void) {
    int n, soma=0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i+=2) {
        soma += i;
    }
    printf("O numero %d da sequencia e: %d\n", n, soma);
    return 0;
}