#include <stdio.h>
#include "matriz.h"
/**
    5 - (POLI 97)
    (a) Faça uma função MAX que recebe como entrada um inteiro n, uma matriz inteira Anxn e devolve três inteiros: k, Lin e Col.
    O inteiro k é um maior elemento de A e é igual a A[Lin,Col].
    Exemplo:
           {3, 7, 1}        {k = 8
    Se a = {1, 2, 8} então  {Lin = 1
           {5, 3, 4}        {Col = 2
    Obs.: Se o elemento máximo ocorrer mais de uma vez, indique em Lin e Col qualquer uma das possíveis posições.
    (b) Faça um programa que, dado um inteiro n e uma matriz quadrada de ordem n, cujos elementos são todos inteiros positivos,
    imprime uma tabela onde os elementos são listados em ordem decrescente, acompanhados da indicação de linha e coluna a que pertencem.
    Havendo repetições de elementos na matriz, a ordem é irrelevante. Utilize obrigatoriamente o procedimento da parte (a), mesmo que você não o tenha feito.
    Ex.: No caso da matriz acima, a saída poderia ser:
    Elem	Linha	Coluna
    8	    1	    2
    7	    0       1
    5       2       0
    4       2       2
    3	    0   	0
    3	    2   	1
    2	    1     	1
    1	    0	    2
    1	    1   	0
 */
void max(int n, int matriz[][n], int *lin, int *col, int *k);
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int matriz[n][n];
    min(n, n, matriz);

    int lin, col, k;
    printf("Elem\tLinha\tColuna\n");
    for(int i = 0; i < n*n; i++){
        max(n, matriz, &lin, &col, &k);
        matriz[lin][col] = 0;
        printf("%d\t%d\t%d\n", k, lin, col);
    }
    return 0;
}
void max(int n, int matriz[][n], int *lin, int *col, int *k){
    int max = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(matriz[i][j] > max){
                *k = matriz[i][j];
                max = matriz[i][j];
                *lin = i;
                *col = j;
            }
        }
    }
}