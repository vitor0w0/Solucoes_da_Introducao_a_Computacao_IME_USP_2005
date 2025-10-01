#include <stdio.h>
/** *
*   (a) Escreva uma função que recebe como parâmetros dois números a e b e devolve o mdc (máximo divisor comum) de a e b,
*   calculado por meio do algoritmo de Euclides.
    (b) Escreva um programa que leia um inteiro positivo n e uma seqüência de n inteiros não-negativos e
    imprime o mdc de todos os números da seqüência.
 */
int mdc(int, int);
int main() {
    int n, max;
    scanf("%d", &n);
    if (n==0)
        return 0;
    int dps;
    scanf("%d", &max); n--;
    while (n-- > 0) {
        scanf("%d", &dps);
        max = mdc(max, dps);
    }
    printf("%d\n", max);
    return 0;
}
int mdc(const int a, const int b) {
    if (b==0)
        return a;
    return mdc(b, a%b);
}