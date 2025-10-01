#include <stdio.h>
/**
2.  (a) Escreva uma função que recebe como parâmetro um inteiro positivo ano e devolve 1 se ano for bissexto, 0 em caso contrário.
    (Um ano é bissexto se (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)).)

    (b) Escreva uma função que tem como parâmetros de entrada e saída três números inteiros, dia, mes e ano, representando uma data,
    e modifica esses inteiros de forma que eles representem o dia seguinte.

    (c) Escreva um programa que leia um inteiro positivo n e uma seqüência de n datas e imprime, para cada data, o dia seguinte.
 */
int biss(int);
void seguinte(int*, int*, int*);
int main() {
    int n;
    scanf("%d", &n);
    while (n-- > 0) {
        int dia, mes, ano;
        scanf("%d%d%d", &dia, &mes, &ano);
        seguinte(&dia, &mes, &ano);
        printf("Data seguinte: %d/%d/%d\n", dia, mes, ano);
    }
    return 0;
}
int biss(const int ano) {
    return ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0);
}
void seguinte(int *dia, int *mes, int *ano) {
    if (*mes == 2 && biss(*ano) && *dia == 28)
        *mes = 29;
    if (*mes == 4 | *mes == 6 | *mes == 9 || *mes == 11) {
        if (*dia == 30) {
            *dia = 1;
            *mes = *mes + 1;
        } else {
            *dia = *dia + 1;
        }
    } else {
        if (*dia == 31 && *mes==12) {
            *dia = 1;
            *ano = *ano + 1;
            *mes = 1;
            return;
        }
        if (*dia == 31) {
            *mes = *mes + 1;
            *dia = 1;
        } else {
            *dia = *dia + 1;
        }
    }
}