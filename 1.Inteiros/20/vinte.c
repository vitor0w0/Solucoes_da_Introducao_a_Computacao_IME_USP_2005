#include <stdio.h>
/**
* (FIS 88) Qualquer número natural de quatro algarismos pode ser dividido em duas dezenas formadas pelos seus dois primeiros e dois últimos dígitos.
    Exemplos:
    1297: 12 e 97.
    5314: 53 e 14.
    Escreva um programa que imprime todos os milhares (4 algarismos) cuja raiz quadrada seja a soma das dezenas formadas pela divisão acima.
    Exemplo: raiz de 9801 = 99 = 98 + 01.
    Portanto, 9801 é um dos números a ser impresso.
 */
int main() {
    for (int n = 1000; n <= 9999; n++) {
        const int soma = n/100+n%100;
        if (soma*soma==n) {
            printf("%d = %d\n", n, soma);
        }
    }
    return 0;
}