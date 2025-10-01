#include <stdio.h>
#define MAX 100
/**
    8 - Dados dois números naturais m e n e duas seqüências ordenadas com m e n números inteiros,
    obter uma única seqüência ordenada contendo todos os elementos das seqüências originais sem repetição.
    Sugestão: Imagine uma situação real, por exemplo, dois fichários de uma biblioteca.
*/
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int M[m], N[n];
    printf("Digite seq de m: ");
    for (int i = 0; i < m; ++i) {
        int num;
        scanf("%d",&num);
        M[i] = num;
    }
    printf("Digite seq de n: ");
    for (int i = 0; i < n; ++i) {
        int num;
        scanf("%d",&num);
        N[i] = num;
    }

    int i = 0, j = 0, k = 0, fim[MAX];
    while (i < m && j < n) {
        if (M[i] > N[j])
            fim[k] = N[j++];
        else if (M[i] == N[j])
            fim[k] = M[i];
        else
             fim[k] = M[i++];

        while (M[i] == fim[k]) i++;
        while (N[j] == fim[k]) j++;
        k++;
    }

    while (i < m) {
        fim[k] = M[i++];
        while (M[i] == fim[k]) i++;
        k++;
    }
    while (j < n) {
        fim[k] = N[j++];
        while (N[j] == fim[k]) j++;
        k++;
    }
    for (int l = 0; l < k; ++l) {
        printf("%d ", fim[l]);
    }
    return 0;
}