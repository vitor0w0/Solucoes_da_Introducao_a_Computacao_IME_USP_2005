#include <stdio.h>
#include <string.h>
/**
*   8 - (a) (MAT 83) Imprimir as n primeiras linhas do triângulo de Pascal
    1
    1    1
    1    2    1
    1    3    3    1
    1    4    6    4    1
    1    5   10   10    5    1
    (b) Imprimir as n primeiras linhas do triângulo de Pascal usando apenas um vetor.
*/
void v_pascal(int n, int[n]);
void m_pascal(int n, int[n][n]);
void m_print(int n, int[n][n]);
int main()
{
    int n;
    scanf("%d", &n);
    printf("Solução com matriz:\n");
    int pascal[n][n];
    m_pascal(n, pascal);
    m_print(n, pascal);

    printf("Solução com vetor:\n");
    int vpascal[n];
    v_pascal(n, vpascal);
    return 0;
}
void m_print(int n, int pascal[n][n]){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j <= i; j++){
            printf("%d ", pascal[i][j]);
        }
        putchar('\n');
    }
}

void m_pascal(int n, int pascal[n][n]){
    memset(pascal, 0, sizeof(int) * n * n);
    for (int i = 0; i < n; ++i){
        pascal[i][0] = 1;
        pascal[i][i] = 1;
    }
    for (int i = 0; i < n - 1; ++i){
        for (int j = 0; j < i; j++){
            pascal[i + 1][j + 1] += pascal[i][j] + pascal[i][j + 1];
        }
    }
}
void v_pascal(int n, int pascal[n]){
    memset(pascal, 0, sizeof(int)*n);
    pascal[0] = 1;
    for (int i = 0; i < n; ++i){
        int j = 0;

        for (j = i; j > 0; j--)
            pascal[j] = pascal[j-1] + pascal[j];
        

        for (j = 0; j <= i; j++)
            printf("%d ", pascal[j]);
        
        putchar('\n');
    }
}