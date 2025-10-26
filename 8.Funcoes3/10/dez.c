#include <stdio.h>
#include "poli.h"
#include <math.h>
/*
    10 - Para encontrar uma raiz de um polinômio   p(x)=a0+a1x+...+anxn, (n >= 2), pode-se aplicar o método de Newton, 
     que consiste em refinar uma aproximação inicial x0 dessa raiz através da expressão:

    Xn+1 = Xn - p(Xn)/p'(Xn)

    n= 0,1,2,...,  onde p'(x) é a primeira derivada de p(x).
    Usualmente, repete-se esse refinamento até que |xn+1 - xn | < e , e >= 0, ou até que m iterações tenham sido executadas.
    Dados um polinômio p(x)=a0+a1x+...+anxn, uma aproximação inicial x0 da raiz de p(x), e >= 0 e o número máximo de iterações que devem ser executadas,
    determine uma aproximação da raiz de p(x) pelo método de Newton. Utilize uma função que, dado um polinômio p(x), calcula a derivada p'(x) e,
    para calcular p(xn) e p'(xn) em cada iteração, uma função que calcula o valor de um polinômio em um ponto.

*/
double dabs(double);
int main(){
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    double vet[n+1], der[n];

    montar(vet, n);
    derivada(vet, n, der);

    double aprox;
    printf("Digite aproximação de x0: ");
    scanf("%lf", &aprox);
    
    char temerro;
    double e;
    printf("Tem valor de tolerancia? 1/0: ");
    scanf(" %c", &temerro);
    if(temerro != '0'){
        printf("Digite valor de tolerância de erro: ");
        scanf("%lf", &e);
    }

    int m;
    printf("Digite max de iterações(se o erro nunca chegar): ");
    scanf("%d", &m);

    int i = 0;
    for (i = 0; i < m; i++){
        if(isnan(aprox) || isinf(aprox)){
            printf("Raizes complexas!\n");
            return 0;
        }

        double xn = aprox;
        double f =  calcular(vet, n, aprox);
        double fl = calcular(der, n-1, aprox);
        if (fl == 0.0) {
            printf("Derivada nula em x = %.14lf. Metodo de Newton interrompido.\n", xn);
            return 0;
        }
        aprox = aprox - f/fl;

        printf("\n=== Iteracao %d ===\n", i);
        printf("F(~%.2lf) = %.4lf\n", xn, f);
        printf("F'(~%.2lf) = %.4lf\n", xn, fl);
        printf("xn+%d = %.4lf - %.4lf/%.4lf\n", i, xn, f, fl);
        printf("xn+%d = %.4lf\n", i, aprox);

        if(temerro != '0' && dabs(aprox - xn) < e){
            temerro = '\0';
            break;
        }
    }
    printf("\n=============== Resultados ===============\n");
    if(temerro == '\0') printf("Tolerancia ultrapassada!\n");
    printf("Aproximacao final: %.14lf\n", aprox);
    printf("p(%.10lf) = %.10e\n", aprox, calcular(vet, n, aprox));
    printf("Iteracoes concluidas: %d\n", i);
    return 0;
}
double dabs(double a){
    return (a < 0.0)? -a : a;
}