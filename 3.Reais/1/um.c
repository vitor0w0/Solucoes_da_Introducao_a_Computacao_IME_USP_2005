#include<stdio.h>
//1-Uma pessoa aplicou um capital de x complexos(dinheiro) a juros mensais de z durante 1 ano. Determinar o montante de cada mês durante este período.
int main() {
    float x, z;
    printf("Digite x e z: ");
    scanf("%f %f", &x, &z);
    for (int i = 1; i < 13; i++) {
        x += x*z/100;
        printf("mes %d = %.2f\n", i, x);
    }
    return 0;
}
