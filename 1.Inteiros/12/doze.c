#include <stdio.h>
//12 - Dados dois números inteiros positivos, determinar o máximo divisor comum entre eles usando o algoritmo de Euclides.
int mdc(int, int);
int main(void) {
    int x, y;
    printf("Digite x e y: ");
    scanf("%d %d", &x, &y);
    printf("mdc(%d, %d) = %d", x, y, mdc(x,y));
    return 0;
}
//se dividir e dar 0, é o numero
int mdc(int maior, int menor) {
    //if (menor==0) return maior;
    //return mdc(menor, maior%menor);
    int resto = menor%maior;
    while (resto != 0) {
        resto = maior%menor;
        maior = menor;
        menor = resto;
    }
    return maior;
}