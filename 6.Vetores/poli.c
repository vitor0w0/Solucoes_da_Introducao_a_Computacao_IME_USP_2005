#include "poli.h"
#include <stdio.h>
#include <stdbool.h>

//monta um polinomio crescente de ponto flutuante com tamanho grau + 1
void montar(double *vet, int grau){
    printf("Digite polinomio com %d elementos: ", grau+1);
    for (int i = 0; i <= grau; i++){
        scanf("%lf", &vet[i]);
    }
}

void printatual(double *vet, int grau, bool negativo){
    if(negativo)
        printf("%.0lf", -vet[grau]);
    else 
        printf("%.0lf", vet[grau]);
    switch (grau){
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

//exibe no console um polinomio crescente
void exibir(double *vet, int grau){
    if(vet[0] < 0) 
        printf("- ");
    printatual(vet, 0, (vet[0] < 0));
    for (int i = 1; i <= grau; i++){
        if(vet[i] < 0)
            printf("- ");
        else
            printf("+ ");
        printatual(vet, i, (vet[i] < 0));
    }
    putchar('\n');
}

//retorna a soma de um polinomio crescente a partir de um valor x 
double calcular(double *vet, int grau, double x){
    double mult = vet[0];
    for (int i = 1; i <= grau; i++){
        mult = mult * x + vet[i];
    }
    return mult;
}

//transforma o vetor dado na derivada do polinomio, se a0+a1x+...+anxn
void derivada(double *src, int grau, double *dst){
    for (int i = 1; i <= grau; i++){
        dst[i-1] = src[i] * i;
    }
}