#include <stdio.h>
#include "poli.h"
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
double produto(double *mvet, double*nvet, int m, int n){;
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
            print(mvet[i] * nvet[j], i+j);
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