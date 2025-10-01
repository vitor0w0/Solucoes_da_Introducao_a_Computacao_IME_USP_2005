#include <stdio.h>
/**
    Dado um número natural na base binária, transformá-lo para a base decimal.
    Exemplo: Dado 10010 a saída será 18, pois 1*2^4 + 0*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 18.
 */
int binToDec(int);
int main(void) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d\n", binToDec(n));
    return 0;
}

int binToDec(int n) {
    int soma = 0, pot = 1;
    while (n > 0) {
        soma += n % 10 * pot;
        n /= 10;
        pot *= 2;
    }
    return soma;
}