#include "poli.h"
#include <stdio.h>
#include <stdbool.h>

//monta um polinomio decrescente de ponto flutuante com tamanho grau + 1
void montar(double *vet, int grau){
    printf("Digite polinomio com %d elementos: ", grau+1);
    for (int i = 0; i <= grau; i++){
        scanf("%lf", &vet[i]);
    }
}

void printatual(int grau, double *vet, int i, bool negativo){
    if(negativo)
        printf("%.0lf", -vet[i]);
    else 
        printf("%.0lf", vet[i]);
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

//exibe no console um polinomio decrescente
void exibir(double *vet, int grau){
    int tam = grau;
    printf("Polinomio: ");
    printatual(grau--, vet, 0, false);
    for (int i = 1; i <= tam; i++, grau--){
        if(vet[i] > 0){
            printf("+ ");
        } else{
            printf("- ");
        }
        printatual(grau, vet, i, (vet[i] < 0));
    }
    putchar('\n');
}

//retorna a soma de um polinomio decrescente a partir de um valor x
double calcular(double *vet, int grau, int x){
    double soma = 0;
    int tam = grau;
    for (int i = 0; i < tam; i++, grau--){
        double pot = 1;
        for (int j = 0; j < grau; j++){
            pot *= x;
        }
        soma += vet[i] * pot;
    }
    soma += vet[tam];
    return soma;
}