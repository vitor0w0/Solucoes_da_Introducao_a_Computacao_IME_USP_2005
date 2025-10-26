#include <stdio.h>
#include "matriz.h"
#include <math.h>
/*
    15 - (a) Faça uma função que transforma um número num vetor correspondente à sua representação binária.

    (b) Dados inteiros positivos n e m, e os vetores ReprN e ReprM correspondentes à representação binária dos números n e m,
    considere a seguinte matriz A de caracteres:
    aij = {`*' se ReprN[i]= 1 e ReprM[j]= 1
          {' ' caso contrário

    Faça um programa que recebe n e m, e constrói a matriz A descrita acima, usando o item (a).
*/
void print(int m, int n, char A[m][n]);
void bin(int *v, int num);
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int tm = (int)log2(m)+1;
    int tn = (int)log2(n)+1;

    int ReprM[tm];
    int ReprN[tn];

    bin(ReprM, m);
    bin(ReprN, n);

    char A[tn][tm];
    for (int i = 0; i < tn; i++){
        for (int j = 0; j < tm; j++){
            if(ReprN[i] == 1 && ReprM[j] == 1){
                A[i][j] = '*';
            } else{
                A[i][j] = ' ';
            }
        }
    }
    print(tm, tn, A);
    return 0;
}
void print(int m, int n, char A[m][n]){
    for (int i = 0; i < m; i++){
        putchar('{');
        for (int j = 0; j < n; j++){
            printf("%c", A[i][j]);
        }
        printf("}\n");
    }
    printf("FIM.\n");
}
void bin(int *v, int num){
    int len = (int)log2(num)+1;
    int i = len - 1;
    while (num > 0){
        if(num % 2 == 0)
            v[i] = 0;
        else
            v[i] = 1;
        num /= 2;
        i--;
    }
}