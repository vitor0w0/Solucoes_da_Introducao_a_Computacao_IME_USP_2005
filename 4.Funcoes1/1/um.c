#include <stdio.h>
/**
*   1 - Um número a é dito permutação de um número b se os dígitos de a formam uma permutação dos dígitos de b.
    Exemplo:   5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455.
    Obs.: Considere que o dígito 0 (zero) não aparece nos números.
    (a) Faça uma função contadígitos que dados um inteiro n e um inteiro d, 0 < d < 9, devolve quantas vezes o dígito d aparece em n.
    (b) Usando a função do item anterior, faça um programa que lê dois inteiros positivos a e b e responda se a é permutação de b.
*/
int contadigito(int, int);
int main() { //1232456 216534
    int n, d;
    printf("Digite n, d: ");
    scanf("%d %d", &n, &d);
    for (int i = 1; i < 10; i++) {
        if (contadigito(n, i) != contadigito(d, i)) {
            puts("Nao e permutacao");
            return 0;
        }
    }
    puts("E permutacao");
    return 0;
}
int contadigito(int n, const int d) {
    int cont = 0;
    while (n > 0) {
        if (n%10==d) {
            cont++;
        }
        n /= 10;
    }
    return cont;
}