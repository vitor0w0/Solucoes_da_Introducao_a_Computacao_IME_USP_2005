#include <stdio.h>
/**
*   (a) Escreva uma função que recebe um número inteiro n>0 e devolve o número de dígitos de n e o primeiro dígito de n.
    (b) Escreva um programa que leia uma seqüência de n inteiros positivos e imprime o número de dígitos e o primeiro dígito de cada um deles.
 */
int digitos(int);
int primeiro(int);
int main() {
    int n;
    scanf("%d", &n);
    while (n-- > 0) {
        int num;
        scanf("%d", &num);
        printf("Qtd de digitos: %d\n", digitos(num));
        printf("Primeiro digito: %d\n", primeiro(num));
    }
    return 0;
}
int digitos(int n) {
    if (n==0) return 1;
    int soma = 0;
    while (n > 0) {
        soma++;
        n /= 10;
    }
    return soma;
}
int primeiro(int n) {
    if (n==0) return 0;
    int p = 0;
    while (n > 0) {
        p = n%10;
        n /= 10;
    }
    return p;
}