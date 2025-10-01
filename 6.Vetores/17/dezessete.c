#include <stdio.h>
/**
*   17 - Dada uma seqüência de n números inteiros, determinar um segmento de soma máxima.
    Exemplo: Na seqüência 5, 2, -2, -7, *3, 14, 10, -3, 9*, -6, 4, 1, a soma do segmento é 33.
 */
int main() { // 12 5 2 -2 -7 3 14 10 -3 9 -6 4 1
    int n; // 1 -2 1 2
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int soma = arr[0], max = arr[0];
    for (int i = 1; i < n; ++i) {
        soma += arr[i];
        if (soma > max)
            max = soma;
        if (soma < 0)
            soma = 0;

    }
    printf("%d", max);
    return 0;
}