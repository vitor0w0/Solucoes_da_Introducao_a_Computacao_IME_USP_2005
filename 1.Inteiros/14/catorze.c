#include <stdio.h>
/**
* Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos (1) através de uma seqüência
*  de números naturais que passou a ser conhecida como seqüência de Fibonacci. O n-ésimo número da seqüência de Fibonacci Fn é
*  dado pela seguinte fórmula de recorrência:
*  F1 = 1
*  F2 = 1
*  F3 = i-1 + i-2
  Faça um programa que, dado n, calcula Fn.
 */
int fib(int);
int main(void) {
    int num;
    printf("======Fibonacci======\n");
    printf("Digite quantos numeros da sequencia a ser imprimido: ");
    scanf("%d", &num);
    for (int i=1; i <= num; i++) {
        printf("%d ", fib(i));
    }
    putchar('\n');
    return 0;
}
int fib(const int num) {
    if (num < 1) return -1;
    int f1=1, f2=0, out=0;
    for (int i = 0; i < num; i++) {
        out = f1 + f2;
        f1 = f2;
        f2 = out;
    }
    return out;
}