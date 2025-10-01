#include <stdio.h>
// 1 - Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.
int main(void) {
    int num=1;
    puts("Digite 0 para sair do loop");
    while (num != 0) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        printf("O quadrado de %d = %d\n", num, num*num);
    }
    return 0;
}