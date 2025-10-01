#include <stdio.h>
int mdc(int a, int b);
int phi(int n);
int tam(int k);
/**
    14 - (POLI 82) Chama-se seqüência de Farey relativa a n, a seqüência das frações racionais irredutíveis,
    dispostas em ordem crescente, com denominadores positivos e não maiores que n.
    Exemplo:  Se n=5, os termos  da seqüência de Farey, tais que 0 <= a <= 1 são:
    0/1, 1/5, 1/4, 1/3, 2/5, 1/2, 3/5, 2/3, 3/4, 4/5, 1/1

    Para gerarmos os termos a de uma seqüência de Farey tais que 0 <= a <= 1, podemos usar o seguinte processo. Começamos com as frações:
    0/1 e 1/1
    e entre cada duas frações consecutivas:
    i/j e k/m
    introduzimos a fração:
    i+k/j+m

    e assim sucessivamente enquanto j + m <= n. Quando não for mais possível introduzir novas frações teremos gerado todos os termos da seqüência
    de Farey relativa a n, tais que 0 <= a <= 1.
    Usando o processo descrito, determine os termos a, 0 <= a <= 1, da seqüência de Farey relativa a n, n inteiro positivo.

    Sugestão: Gere os numeradores e os denominadores em dois vetores.

*/
int main() {
    int n;
    scanf("%d", &n);
    int len = tam(n);
    int den[len], num[len];

    num[0] = 0;
    den[0] = 1;
    num[len-1] = 1;
    den[len-1] = 1;

    for (int i = 0; i < len; i++) {
        printf("%d, ", num[i]);
    }
    putchar('\n');
    for (int i = 0; i < len; i++) {
        printf("%d, ", den[i]);
    }


    return 0;
}



int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a%b);
}
int phi(int n) {
    if (n==1) return 1;
    int soma = 0;
    for (int i = 1; i < n; ++i) {
        if (mdc(i, n) == 1)
            soma++;
    }
    return soma;
}
int tam(int k) {
    int soma = 1;
    for (int i = 1; i <= k; ++i) {
        soma += phi(i);
    }
    return soma;
}