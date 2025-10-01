#include<stdio.h>
/**
*   10.  Dadas as populações de Uauá (BA) e Nova York (PI) e sabendo que a população de Uauá tem um crescimento anual de x
*   e a população de Nova York tem um crescimento anual de y determine:
    Se a população da cidade menor ultrapassa a da maior.
    Quantos anos passarão antes que isso ocorra.
 */
int main() {
    float x, y;
    int uau2, ny2;

    printf("Digite a populacao de Uaua e Nova York: ");
    scanf("%d %d", &uau2, &ny2);
    float uau = (float) uau2;
    float ny = (float) ny2;
    const char a = '%';

    printf("Digite a taxa de crescimento de Uaua e Nova York(%c):", a);
    scanf("%f %f", &x, &y);

    int anos = 0;
    if (uau > ny && x < y) { //se a taxa da cidade 2 for maior, e for cidade 2 for a menor cidade, é possivel calcular quando ela alcança cidade 1
        while (uau > ny) {
            uau += uau*x/100;
            ny += ny*y/100;
            anos++;
        }
        printf("Nova York alcanca Uaua depois de %d anos\n", anos);
    } else if (uau < ny && x > y) {//se a taxa da cidade 1 for maior, e cidade 1 for a menor cidade, é possivel calcular quando ela alcança cidade 2
        while (uau < ny) {
            uau += uau*x/100;
            ny += ny*y/100;
            anos++;
        }
        printf("Uaua alcanca Nova York depois de %d anos\n", anos);
    } else { //nenhum outro caso ultrapasssa
        puts("Nao ultrapassa");
    }
    return 0;
}