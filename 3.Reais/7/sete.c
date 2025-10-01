#include <math.h>
#include <stdio.h>
/**
7.  Dados x e y reais, y > 0, calcular uma aproximação para sen x através da seguinte série infinita:
        sen x = x/1! - x^3/3! + x^5/5! - ... (-1)^k*(x^2k+1)/2k+1
    incluindo todos os termos até que
      |x^2k+1|/(2k+1)! < y
    Compare com os resultados de sua calculadora!
    | | -> absoluto de um numero
 */
unsigned long long fat(int);
int main() {
    long double x, y;
    long double soma = 0;
    scanf("%Lf %Lf", &x, &y);
    const double X = (double)x, Y = (double)y;

    int flag = 1, i = 1;
    for (int j = 1; 1; j++) {
        soma += (long double)pow((double)x, i)/fat(i)*flag;
        long double teste = pow(X, 2*j+1);
        if (teste < 0)
            teste *= -1;
        if (teste/fat(2*j+1) < Y)
            break;
        flag *= -1;
        i += 2;
    }
    printf("Original: %.12lf\n", sin(X));
    printf("Aproxim.: %.12Lf\n", soma);
    return 0;
}
unsigned long long fat(const int n) {
    unsigned long long fat = 1;
    for (int i = 2; i <= n; ++i) {
        fat *= i;
    }
    return fat;
}