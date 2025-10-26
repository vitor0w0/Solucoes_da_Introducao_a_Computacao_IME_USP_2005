#include <stdio.h>
#include <string.h>
#include "poli.h"
#include <stdbool.h>
/**
 *  12.  Dado um polinômio p(x)=a0+a1x+...+anxn, calcular o polinômio q(x) tal que p(x)= (x-a).q(x) + p(a),
 *  para m valores distintos de a(Usar o método de Briot-Ruffini)
*/
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    double p[n+1];
    montar(p, n);
    printf("Polinomio recebido: ");
    exibir(p, n);

    int m;
    printf("Digite m: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++){
        int a;
        printf("A%d(nao invertido): ", i);
        scanf("%d", &a);
        a = -a;

        double q[n];
        q[n-1] = p[n];

        int j = n-2, k = n-1;
        while(j >= 0){
            q[j] = q[j+1] * a + p[k];
            k--; j--;
        }
        exibir(q, n-1);
        printf("Resto: %.0f\n", q[0] * a + p[0]);
    }
    return 0;
}