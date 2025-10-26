#include <stdio.h>
#include "matriz.h"
/*
    11 - (a) Escreva uma função que recebe como parâmetros:

    dois inteiros positivos n e m;
    uma matriz Anxm;
    o índice c de uma coluna;
    os índices k e p de duas linhas,
    e ordena entre as linhas k e p da matriz A segundo a coluna c.
    Exemplo:
    n=6,    m=3
    c=1,
    k=0,    p=4

        {0  12  1}                {-1 -3  2}
        {1   2 -1}                {0  -2  3}
    A = {0  -2  3} tem como saída {1   2  3}
        {-1 -3  2}                {0  12  1}
        {0  18  1}                {0  18  1}
        {0  10  1}                {0  10  1}


    (b) Dadas n datas em uma matriz DATAnx3, onde a primeira coluna corresponde ao dia, a segunda ao mês e a terceira ao ano,
    coloque essas datas em ordem cronológica crescente, usando a função acima.


    Exemplo: n = 6,
           {25   6  1965}                {13  12  1941}
           {16   6  1965}                {21   4  1965}
    DATA = {13  12  1941} tem como saída {16   6  1965}
           {26   4  1965}                {25   6  1965}
           {6    2  1989}                {1   10  1973}
           {1   10  1973}                {6    2  1989}
*/
void swap(int *a, int *b);
void ordena(int n, int m, int a[n][m], int c, int k, int p);
int main(){
    int n;
    printf("Quantas datas: ");
    scanf("%d", &n);
    int DATA[n][3];
    min(n, 3, DATA);
    printf("Original:\n");
    mout(n, 3, DATA);

    ordena(n, 3, DATA, 2, 0, n);
    for(int i = 0; i < n-1; i++){
        int j = i+1;
        if (DATA[i][2] == DATA[j][2]){
            while (DATA[i][2] == DATA[j][2]){
                j++;
            }
            ordena (n, 3, DATA, 1, i, j);
            j = i+1;
            if (DATA[i][1] == DATA[j][1]){
                while(DATA[i][1] == DATA[j][1]){
                    j++;
                }
                ordena(n, 3, DATA, 0, i, j);
            }
        }
    }
    
    printf("Ordem cronologica:\n");
    mout(n, 3, DATA);
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void ordena(int n, int m, int a[n][m], int c, int k, int p){
    for (int i = k; i < p; i++){
        for (int j = i; j < p; j++){
            if(a[i][c] > a[j][c]){
                for (int l = 0; l < m; l++){
                    swap(&a[i][l], &a[j][l]);
                }
            }
        }
    } 
}