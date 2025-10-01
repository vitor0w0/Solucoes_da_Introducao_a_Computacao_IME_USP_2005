#include <stdio.h>
/**
 * 11 - Dado um inteiro positivo n, calcular e imprimir o valor da seguinte soma:
 *      1/n + 2/n-1 + 3/n-2 + ... + n/1
*/
int main() {
    int n;
    float soma = 0;
    printf("Digite n:");
    scanf("%d", &n);
    float i = 1;
    const float N = (float) n;
    for (int cont = 0; i <= N; cont++) {
        soma += i/(n-cont);
        i += 1.0f;
    }
    printf("%.5f\n", soma);
    return 0;
}