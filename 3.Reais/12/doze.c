#include<stdio.h>
/**
*   12 - Faça um programa que calcula a soma
            1 - 1/2 + 1/3 - 1/4 + ... + 1/9.999 - 1/10.000
    pelas seguintes maneiras:
        adição dos termos da direita para a esquerda;
        adição dos termos da esquerda para a direita;
        adição separada dos termos positivos e dos termos negativos da esquerda para a direita;
        adição separada dos termos positivos e dos termos negativos da direita para a esquerda.
        Compare e discuta os resultados obtidos no computador.
*/

int main() {
    //adição dos termos da direita para a esquerda
    long double soma = 1l;
    int flip = -1;
    for (int i = 2; i <= 10000; i++) {
        soma += 1.0l/i*flip;
        flip *= -1;
    }
    printf("Esquerda para a direita: %.15Lf\n", soma);





    //adição dos termos da esquerda para a direita
    soma = 1l;
    flip = -1;
    for (int i = 10000; i >= 2; i--) {
        soma += 1.0l/i*flip;
        flip *= -1;
    }
    printf("Direita para a esquerda: %.15Lf\n", soma);




    //adição separada dos termos positivos e dos termos negativos da esquerda para a direita
    soma = 1l;
    for (int i = 3; i <= 10000; i += 2) {
        soma += 1.0l/i;
    }
    flip = -1;
    for (int i = 2; i <= 10000; i += 2) {
        soma += 1.0l/i*flip;
    }
    printf("Separada esq. a direita: %.15Lf\n", soma);





    //adição separada dos termos positivos e dos termos negativos da direita para a esquerda
    soma = 1l;
    for (int i = 9999; i >= 2; i -= 2) {
        soma += 1.0l/i;
    }
    flip = -1;
    for (int i = 10000; i >= 2; i -= 2) {
        soma += 1.0l/i*flip;
    }
    printf("Separada direita a esq.: %.15Lf\n", soma);
    return 0;
}