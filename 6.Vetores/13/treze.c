#include <stdio.h>
#include "poli.h"
#include <stdlib.h>
#include <math.h>
//13 - Dados dois polinômios reais   p(x)=a0+a1x+...+anxn e q(x)=b0+b1x+...+bmxm determinar o produto desses polinômios.
void print(double prod, int grau){
        printf("%.0lf", prod);
    switch(grau){
        case 0:
            printf(" ");
            break;
        case 1:
            printf("x ");
            break;
        default:
            printf("x^%d ", grau);
            break;
    }
}
void produto(double *mvet, double*nvet, int m, int n){
    int k = 0, mtam = m, ntam = n;
    for (int i = 0; m >= 0; i++, m--){
        n = ntam;
        for (int j = 0; n >= 0; j++, n--){
            double prod = mvet[i] * nvet[j];
            print(prod, m+n);
        }
    }
    putchar('\n');
}
int main(){
    int m, n;

    printf("Digite m: ");
    scanf("%d", &m);
    double mvet[m+1]; montar(mvet, m);

    printf("Digite n: "); 
    scanf("%d", &n);
    double nvet[n+1]; montar(nvet, n);

    exibir(mvet, m);
    exibir(nvet, n);

    produto(mvet, nvet, m, n);
    return 0;
}