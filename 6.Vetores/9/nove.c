#include <stdio.h>
/**
    9.  Dadas duas seqüências com n números inteiros entre 0 e 9, interpretadas como dois números inteiros de n algarismos,
    calcular a seqüência de números que representa a soma dos dois inteiros.
    Exemplo: n = 8,
    1ª  seqüência	      8    2    4    3    4    2    5    1
    2ª  seqüência      +  3    3    7    5    2    3    3    7
                     1    1    6    1    8    6    5    8    8
*/
void mout(const int *arr, int); // 8 8 2 4 3 4 2 5 1 3 3 7 5 2 3 3 7
int main() {
    int n;
    scanf("%d", &n);
    int A[n], B[n];
    for (int i = 0; i < n; ++i) {
        int num;
        scanf("%d",&num);
        A[i] = num;
    }
    for (int i = 0; i < n; ++i) {
        int num;
        scanf("%d",&num);
        B[i] = num;
    }
    printf("    ");
    mout(A, n);
    printf("+   ");
    mout(B, n);

    int res[n];
    for (int i = 0; i < n; ++i) {
        res[i] = 0;
    }
    for (int i = n-1; i > 0; i--) {
        res[i] += A[i] + B[i];
        if (res[i] >= 10) {
            res[i-1] += res[i]/10;
            res[i] %= 10;
        }
    }
    res[0] += A[0] + B[0];
    if (res[0] >= 10) {
        printf("  %d ", res[0]/10);
        res[0] %= 10;
    } else
        printf("    ");
    mout(res, n);

    return 0;
}
void mout(const int *arr, const int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d  ", arr[i]);
    }
    putchar('\n');
}