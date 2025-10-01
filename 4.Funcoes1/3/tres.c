#include <stdio.h>
/**
    3 - (MAT - 94) Uma seqüência de n números inteiros não nulos é dita piramidal m-alternante se é constituída por m segmentos:
    o primeiro com um elemento, o segundo com dois elementos e assim por diante até o m-ésimo, com m elementos.
    Além disso, os elementos de um mesmo segmento devem ser todos pares ou todos ímpares e para cada segmento,
    se seus elementos forem todos pares (ímpares), os elementos do segmento seguinte devem ser todos ímpares (pares).
    Por exemplo, a seqüência com n = 10 elementos:
    *12* *3 7* *2 10 4* *5 13 5 11* é piramidal 4-alternante.
    A seqüência com n = 3 elementos:
    *7* *10 2* é piramidal 2-alternante.
    A seqüência com n = 8 elementos:
    *1* *12 4* *3 13 5* *12 6* não é piramidal alternante pois o último segmento não tem tamanho 4.
    (a) Escreva uma função bloco que recebe como parâmetro um inteiro n e lê n inteiros do teclado, devolvendo um dos seguintes valores:
       0,  se os n números lidos forem pares;
       1,  se os n números lidos forem ímpares;
      -1,  se entre os n números lidos há números com paridades diferentes.
    (b) usando a função do item anterior, escreva um programa que, dados um inteiro n > 1 e uma seqüência de n números inteiros,
    verifica se ela é piramidal m-alternante. O programa deve imprimir o valor de m ou dar a resposta não.
*/
int bloco(int);
int piramidal(int);
int main() {
    int n;
    scanf("%d", &n);
    if (piramidal(n)) {
        puts("NAO.");
        return 0;
    }
    int m, i, comp = bloco(1);
    for (m = 2, i = 1; i <= n; m++, i+=m) {
        const int aux = bloco(m);
        if (aux == -1 || aux == comp) {
            puts("NAO.");
            return 0;
        }
        comp = aux;
    }
    printf("piramidal %d-alternante", m-1);
    return 0;
}
int piramidal(const int num) {
    int tri = 1, i = 0;
    while (i < num) {
        i += tri;
        tri++;
    }
    return i==num? 0 : 1;
}
int bloco(const int n) {
    int par = 0, impar = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num%2==0)
            par++;
        else
            impar++;
    }
    return (n==par)? 0 : (n==impar)? 1 : -1;
}